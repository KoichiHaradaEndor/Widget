//%attributes = {}
var $progress_o : cs:C1710.Progress
var $i; $max_l : Integer

$progress_o:=cs:C1710.Progress.new("test")
$progress_o.start()
$progress_o.buttonEnabled:=True:C214
$progress_o.buttonTitle:="停止"  // Windows only

$progress_o.title:="Preparing..."
$progress_o.progress:=-1
DELAY PROCESS:C323(Current process:C322; 120)

$progress_o.hide()
DELAY PROCESS:C323(Current process:C322; 120)
$progress_o.show()

$progress_o.setCoordinates(200; 500)
$progress_o.setGlobalAppearance({\
title: {fontSize: 14}; \
message: {fontSize: 14}; \
button: {fontSize: 14}\
})

$max_l:=100
For ($i; 1; $max_l)
	$progress_o.progress:=$i/$max_l
	$progress_o.title:=String:C10($i)+" / "+String:C10($max_l)
	$progress_o.message:="Calculating"
	DELAY PROCESS:C323(Current process:C322; 5)
	If ($progress_o.canceled)
		break
	End if 
End for 
$progress_o.stop()


$progress_o:=cs:C1710.Progress.new("test2")
$progress_o.start()
For ($i; 1; $max_l)
	$progress_o.setProgress({progress: $i/$max_l; title: String:C10($i)+" / "+String:C10($max_l); message: "Calculating"})
	DELAY PROCESS:C323(Current process:C322; 5)
End for 
$progress_o.stop()
