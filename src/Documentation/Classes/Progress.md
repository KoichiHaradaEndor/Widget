# Progress Class

## Description

This class consists of wrapper methods for the 4D Progress component. By using this, you can access to each progress dialog by its name which is given when initializing the progress object. So you can handle the progress dialog in subroutines without passing the progress id, or even in another process.

## Constructor

```4d
cs.Widget.Progress.new({name : Text})
```

You pass the `name` of the progress dialog as the parameter to the constructor. Doing so you can access the progress dialog which has the same name from anywhere, from subroutine or even from another process. You can omit the parameter or pass empty string for the name when you are sure only one progress dialog is used, or when you modify global settings. The `name` can be any string except "\_\_ANONYMOUS\_PROGRESS\_\_" which is reserved by the component.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
```

## Properties

### .title

```4d
cs.Widget.Progress.title : Text
```

This property is used to set or get the title of the progress dialog. The title is displayed upper part of the progress dialog.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
For($i; 0; $selection_o.length-1)
  $progress_o.title:="Processing "+String($i+1)+" / "+String($selection_o.length)+" entities."
  $title_t:=$progress_o.title
End for
```

### .message

```4d
cs.Widget.Progress.message : Text
```

This property is used to set or get the message of the progress dialog. The message is displayed under the title (on Windows) or just below the progress bar (on macOS).

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
For($i; 0; $selection_o.length-1)
  $progress_o.message:="In progress"
  $message_t:=$progress_o.message
End for
```

### .progress

```4d
cs.Widget.Progress.progress : Real
```

This property is used to set or get the current progress value for the progress dialog. The range of the value is between 0 and 1. Pass -1 to show undefined progress bar (aka barber type on macOS).

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
For($i; 0; $selection_o.length-1)
  $progress_o.progress:=($i+1)/$selection_o.length
  $progress_r:=$progress_o.progress
End for
```

### .buttonEnabled

```4d
cs.Widget.Progress.buttonEnabled : Boolean
```

This property is used to set or get if the cancel button should be displayed or not. By default it is not displayed. Pass True if you wish to show the button.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$progress_o.buttonEnabled:=True
$enabled_b:=$progress_o.buttonEnabled
```

### .buttonTitle

```4d
cs.Widget.Progress.buttonTitle : Text
```

(Windows only.) This property is used to set or get the title of the cancel button.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$progress_o.buttonTitle:="Stop"
$buttonTitle_t:=$progress_o.buttonTitle
```

### .canceled

```4d
cs.Widget.Progress.canceled : Boolean
```

This function returns boolean value that indicates if the cancel button on the progress dialog has been clicked by the user or not. When it is clicked, it returns true, otherwise it returns false. This property is read only.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$progress_o.buttonEnabled:=True // cancel button must be enabled explicitly.
For each($entity_o; $selection_o)
  If($progress_o.canceled)
    break
  End if
End for each
$progress_o.stop()
```

### .icon

```4d
cs.Widget.Progress.icon : Picture
```

This property is used to set or get the icon of the progress dialog.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$progress_o.icon:=$icon_g
$icon_g:=$progress_o.icon
```

### .stopEventListener

```4d
cs.Widget.Progress.stopEventListener : Text
```

This property is used to set or get the event listener method for the on Stop event which is invoked when user clicks on the cancel button.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$progress_o.icon:=$icon_g
$icon_g:=$progress_o.icon
```

## Functions

### .start()

```4d
cs.Widget.Progress.start()
```

This function adds a progress dialog to the progress window. If the dialog with the same name had already been added, this function does nothing.

Note that this function must be called before any other class functions (except global setting functions) and/or getting/setting properties code since `.start()` calls `Progress New` 4D command internally to obtain progress id, then registers the id in the 4D's Storage shared object. Until the function is called, there's no progress id provided.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
```

### .stop()

```4d
cs.Widget.Progress.stop()
```

This function removes the corresponding progress dialog from the progress window.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
// do some work
$progress_o.stop()
```

### .setProgress()

```4d
cs.Widget.Progress.setProgress(value : object)
```

This function is used to set progress bar value, title and message of the progress dialog in one line of code.

Pass object type parameter that has following properties:
- progress: value of progress bar whose rages are -1 or between 0 and 1.
- title: title text of the progress dialog.
- message: message text of the progress dialog.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$length_l:=$selection_o.length
For($i; 0; $length_l-1)
  $progress_o.setProgress({\
    progress: ($i+1)/$length_l;\
    title: "Processing "+String($i+1)+" / "+String($length_l)+" entities.";\
    message: "In progress"\
    })
End for
$progress_o.stop()
```

is equivalant to

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new("LoopThroughSelection")
$progress_o.start()
$length_l:=$selection_o.length
For($i; 0; $length_l-1)
  $progress_o.progress:=($i+1)/$length_l
  $progress_o.title:="Processing "+String($i+1)+" / "+String($length_l)+" entities."
  $progress_o.message:="In progress"
End for
$progress_o.stop()
```

### .setGlobalAppearance()

```4d
cs.Widget.Progress.setGlobalAppearance(appearance : Object)
```

*`Global Settings`

This function modifies the apearances of the progress window. The settings are applied to all the progress dialogs.

|1st level|2nd level|Type|
|:--------|:--------|:--------:|
|title||||
||fontSize|Integer|
||fontName|Text|
|message|||
||fontSize|Integer|
||fontName|Text|
|button|||
||fontSize|Integer|
||fontName|Text|

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new()
$appearance_o:={}
$appearance_o.title:={fontSize: 13; fontName: "Arial"}
$appearance_o.message:={fontSize: 10; fontName: "Helvetica"}
$appearance_o.button:={fontSize: 12; fontName: "Arial"}
$progress_o.setGlobalAppearance($appearance_o)
```

### .hide()

```4d
cs.Widget.Progress.hide()
```

*`Global Settings`

This function is used to hide the progress window. The setting are applied to progress window.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new()
$progress_o.hide()
$progress_o.show()
```

### .show()

```4d
cs.Widget.Progress.show()
```

*`Global Settings`

This function is used to show the progress window which is previously hidden by `.hidden()` function. The setting are applied to progress window.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new()
$progress_o.hide()
$progress_o.show()
```

### .setCoordinates()

```4d
cs.Widget.Progress.setCoordinates(hPos : Integer; vPos : Integer)
```

*`Global Settings`

This function moves the progress window to the specified position on screen. Pass horizontal coordinate in `hPos` and vertical coordinate in `vPos`. The setting are applied to progress window.

#### Example

```4d
var $progress_o : cs.Widget.Progress
$progress_o:=cs.Widget.Progress.new()
$progress_o.setCoordinates(10;30)
```
