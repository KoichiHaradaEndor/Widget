//%attributes = {}
var $progress_o : cs:C1710.Progress
var $i; $max_l : Integer

$progress_o:=cs:C1710.Progress.new("test")
$progress_o.start()
$progress_o.buttonEnabled:=True:C214

$progress_o.title:="タイトル"
$max_l:=100000
For ($i; 1; $max_l)
	$progress_o.progress:=$i/$max_l
	$progress_o.message:=String:C10($i)+" / "+String:C10($max_l)
	DELAY PROCESS:C323(Current process:C322; 5)
	If ($progress_o.canceled())
		break
	End if 
End for 

$progress_o.stop()
