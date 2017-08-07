<?php 

if($_REQUEST["ip"]){
$myfile = fopen("ip.txt", "w") or die("Unable to open file!");

fwrite($myfile, $_REQUEST["ip"]);
fclose($myfile);
}else{
$myfile = fopen("data.txt", "w") or die("Unable to open file!");

fwrite($myfile, $_REQUEST["flag"]);
fclose($myfile);
}

 ?>