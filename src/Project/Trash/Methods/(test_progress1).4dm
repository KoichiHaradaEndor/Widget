//%attributes = {}
var $progress_o : cs:C1710.Progress
var $i; $max_l : Integer

$progress_o:=cs:C1710.Progress.new("test")
$progress_o.start()
$progress_o.buttonTitle:="テスト"
$title:=$progress_o.buttonTitle
$progress_o.stop()