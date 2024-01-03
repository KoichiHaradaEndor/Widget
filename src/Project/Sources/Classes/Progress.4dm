/**
* Title: Main text
* Message: Description displayed under the main title (Windows) or under the progress bar (macOS)
* Progress: Value of the progress bar (range 0-1)
*
* In this class, we use "Use" keyword even when it's not mandatory since we want to
* make sure only one object instance can access to Storage.progress object.
*/

property name : Text

Class constructor($name_t : Text)
	
	Use (Storage:C1525)
		Storage:C1525.progress:=Storage:C1525.progress || New shared object:C1526
	End use 
	
	This:C1470.name:=$name_t || "__ANONYMOUS_PROGRESS__"
	
Function start()
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]=Null:C1517)
			$id_l:=Progress New
			Storage:C1525.progress[This:C1470.name]:=$id_l
		End if 
		
	End use 
	
Function stop()
	
	var $id_l : Integer
	var $name_t : Text
	
	$name_t:=This:C1470.name
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress QUIT($id_l)
			OB REMOVE:C1226(Storage:C1525.progress; $name_t)
		End if 
		
	End use 
	
Function get canceled() : Boolean
	
	var $id_l : Integer
	var $stopped_b : Boolean
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$stopped_b:=Progress Stopped($id_l)
		End if 
		
	End use 
	
	return $stopped_b
	
Function get title() : Text
	
	var $id_l : Integer
	var $title_t : Text
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$title_t:=Progress Get Title($id_l)
		End if 
		
	End use 
	
	return $title_t
	
Function set title($title_t : Text)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET TITLE($id_l; $title_t)
		End if 
		
	End use 
	
Function get message() : Text
	
	var $id_l : Integer
	var $message_t : Text
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$message_t:=Progress Get Message($id_l)
		End if 
		
	End use 
	
	return $message_t
	
Function set message($message_t : Text)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET MESSAGE($id_l; $message_t)
		End if 
		
	End use 
	
Function get progress() : Real
	
	var $id_l : Integer
	var $progress_r : Real
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$progress_r:=Progress Get Progress($id_l)
		End if 
		
	End use 
	
	return $progress_r
	
Function set progress($progress_r : Real)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET PROGRESS($id_l; $progress_r)
		End if 
		
	End use 
	
Function setProgress($value_o : Object)
	
/**
* value:={
*   progress : Real,
*   title : Text,
*   message : Text
* }
*/
	
	var $id_l; $type_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			If ($value_o.progress#Null:C1517)
				$type_l:=Value type:C1509($value_o.progress)
				If (($type_l=Is real:K8:4) || ($type_l=Is longint:K8:6))
					Progress SET PROGRESS($id_l; $value_o.progress)
				End if 
			End if 
			If (($value_o.title#Null:C1517) && (Value type:C1509($value_o.title)=Is text:K8:3))
				Progress SET TITLE($id_l; $value_o.title)
			End if 
			If (($value_o.message#Null:C1517) && (Value type:C1509($value_o.message)=Is text:K8:3))
				Progress SET MESSAGE($id_l; $value_o.message)
			End if 
		End if 
		
	End use 
	
	// MARK: Local settings
Function get buttonEnabled() : Boolean
	
	var $id_l : Integer
	var $enabled_b : Boolean
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$enabled_b:=Progress Get Button Enabled($id_l)
		End if 
		
	End use 
	
	return $enabled_b
	
Function set buttonEnabled($enabled_b : Boolean)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET BUTTON ENABLED($id_l; $enabled_b)
		End if 
		
	End use 
	
Function get buttonTitle() : Text
	
	var $id_l : Integer
	var $title_t : Text
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$title_t:=Progress Get Button Title($id_l)
		End if 
		
	End use 
	
	return $title_t
	
Function set buttonTitle($title_t : Text)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET BUTTON TITLE($id_l; $title_t)
		End if 
		
	End use 
	
Function get icon() : Picture
	
	var $id_l : Integer
	var $icon_g : Picture
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$icon_g:=Progress Get Icon($id_l)
		End if 
		
	End use 
	
	return $icon_g
	
Function set icon($icon_g : Picture)
	
/**
* Icon max size:
*   40 x 40 px for macOS
*   40 x 80 px for Windows
*/
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET ICON($id_l; $icon_g)
		End if 
		
	End use 
	
Function get stopEventListener() : Text
	
	var $id_l : Integer
	var $methodName_t : Text
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			$methodName_t:=Progress Get On Stop Method($id_l)
		End if 
		
	End use 
	
	return $methodName_t
	
Function set stopEventListener($methodName_t : Text)
	
	var $id_l : Integer
	
	Use (Storage:C1525.progress)
		
		If (Storage:C1525.progress[This:C1470.name]#Null:C1517)
			$id_l:=Storage:C1525.progress[This:C1470.name]
			Progress SET ON STOP METHOD($id_l; $methodName_t)
		End if 
		
	End use 
	
	// MARK: Global settings
Function setGlobalAppearance($settings_o : Object)
	
/**
* Settings: Object
*   title: {
*     fontSize: Integer
*     fontName: Text
*   }
*   message: {
*     fontSize: Integer
*     fontName: Text
*   }
*   button: {
*     fontSize: Integer
*     fontName: Text
*   }
*/
	
	// Check property types
	Case of 
		: ($settings_o.title=Null:C1517)
			
		: (Value type:C1509($settings_o.title)#Is object:K8:27)
			throw:C1805({message: "The title property must be object type."})
		: (($settings_o.title.fontSize#Null:C1517) && (Value type:C1509($settings_o.title.fontSize)#Is longint:K8:6) && (Value type:C1509($settings_o.title.fontSize)#Is real:K8:4))
			throw:C1805({message: "The fontSize property must be numeric type."})
		: (($settings_o.title.fontName#Null:C1517) && (Value type:C1509($settings_o.title.fontName)#Is text:K8:3))
			throw:C1805({message: "The fontSize property must be text type."})
	End case 
	
	
	Case of 
		: ($settings_o.message=Null:C1517)
			
		: (Value type:C1509($settings_o.message)#Is object:K8:27)
			throw:C1805({message: "The title property must be object type."})
		: (($settings_o.message.fontSize#Null:C1517) && (Value type:C1509($settings_o.message.fontSize)#Is longint:K8:6) && (Value type:C1509($settings_o.message.fontSize)#Is real:K8:4))
			throw:C1805({message: "The fontSize property must be numeric type."})
		: (($settings_o.message.fontName#Null:C1517) && (Value type:C1509($settings_o.message.fontName)#Is text:K8:3))
			throw:C1805({message: "The fontSize property must be text type."})
	End case 
	
	
	Case of 
		: ($settings_o.button=Null:C1517)
			
		: (Value type:C1509($settings_o.button)#Is object:K8:27)
			throw:C1805({message: "The title property must be object type."})
		: (($settings_o.button.fontSize#Null:C1517) && (Value type:C1509($settings_o.button.fontSize)#Is longint:K8:6) && (Value type:C1509($settings_o.button.fontSize)#Is real:K8:4))
			throw:C1805({message: "The fontSize property must be numeric type."})
		: (($settings_o.button.fontName#Null:C1517) && (Value type:C1509($settings_o.button.fontName)#Is text:K8:3))
			throw:C1805({message: "The fontSize property must be text type."})
			
	End case 
	
	var $DO_NOT_MODIFY_l : Integer
	var $DO_NOT_MODIFY_t : Text
	
	var $titleFontSize_l; $messageFontSize_l; $buttonFontSize_l : Integer
	var $titleFontName_t; $messageFontName_t; $buttonFontName_t : Text
	
	$DO_NOT_MODIFY_l:=-1
	$DO_NOT_MODIFY_t:=""
	
	If ($settings_o.title#Null:C1517)
		$titleFontSize_l:=($settings_o.title.fontSize=Null:C1517) ? $DO_NOT_MODIFY_l : $settings_o.title.fontSize
		$titleFontName_t:=($settings_o.title.fontName=Null:C1517) ? $DO_NOT_MODIFY_t : $settings_o.title.fontName
	End if 
	
	If ($settings_o.message#Null:C1517)
		$messageFontSize_l:=($settings_o.message.fontSize=Null:C1517) ? $DO_NOT_MODIFY_l : $settings_o.message.fontSize
		$messageFontName_t:=($settings_o.message.fontName=Null:C1517) ? $DO_NOT_MODIFY_t : $settings_o.message.fontName
	End if 
	
	If ($settings_o.button#Null:C1517)
		$buttonFontSize_l:=($settings_o.button.fontSize=Null:C1517) ? $DO_NOT_MODIFY_l : $settings_o.button.fontSize
		$buttonFontName_t:=($settings_o.button.fontName=Null:C1517) ? $DO_NOT_MODIFY_t : $settings_o.button.fontName
	End if 
	
	Progress SET FONT SIZES($titleFontSize_l; $messageFontSize_l; $buttonFontSize_l)
	Progress SET FONTS($titleFontName_t; $messageFontName_t; $buttonFontName_t)
	
Function set errorEventListener($methodName_t : Text)
	
/**
* Error handler is applied globally
*/
	
	Progress SET ON ERROR METHOD($methodName_t)
	
Function get errorEventListener() : Text
	
	var $methodName_t : Text
	
	$methodName_t:=Progress Get On Error Method()
	
	return $methodName_t
	
Function show()
	
	Progress SET WINDOW VISIBLE(True:C214)
	
Function hide()
	
	Progress SET WINDOW VISIBLE(False:C215)
	
Function setCoordinates($horizontalPosition_l : Integer; $verticalPosition_l : Integer)
	
	Progress SET WINDOW VISIBLE(True:C214; $horizontalPosition_l; $verticalPosition_l)
	
	