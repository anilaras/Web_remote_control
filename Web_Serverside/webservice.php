<?php 

header('Access-Control-Allow-Origin: *');

header('Access-Control-Allow-Methods: GET, POST');

/**
*  hio
*/
class WebService
{
	
	function __construct( $method ){
		$this->{$method}();
	}

	function route(){
		extract($_REQUEST);
		settype($x, "double");
		settype($y, "double");
		settype($z, "double");
		echo $x;
		echo "<br>". $y;
		echo "<br>". $z;
		if(  $y <= -2 && $x > 2)
			$flag = 1;
		else if( $y < -2 && $x < -2)
			$flag = 3;
		else if( $y > 2 && $x > 2 )
			$flag = 7;
		else if( $y > 2 && $x < -2 )
			$flag = 9;
		else if( $y < -2 )
			$flag = 2;
		else if( $y > 2 )
			$flag = 8;
		else if( $x < -2 )
			$flag = 6;
		else if( $x > 2 )
			$flag = 4;
		else 
			$flag = 5;

		//$this->writeFile( "X: " . $x . "<br>Y: " . $y . "<br>Z: " . $z . "<br>flag:" . $flag );
		$this->writeFile( $flag );
	}

	function routeForArduino(){
		extract($_REQUEST);
		settype($x, "double");
		settype($y, "double");
		settype($z, "double");
		$y = $y / 1000;
		$x = $x / 1000;
		if(  $y <= -3 && $x < -3)
			$flag = 1;
		else if(  $y > 3 && $x < -3)
			$flag = 3;
		else if( $y < -3 && $x > 3 )
			$flag = 7;
		else if( $y > 3 && $x > 3 )
			$flag = 9;
		else if( $x < -3 )
			$flag = 2;
		else if( $x > 3 )
			$flag = 8;
		else if( $y < -3 )
			$flag = 4;
		else if( $y > 3 )
			$flag = 6;
		else 
			$flag = 5;

		$this->writeFile( $flag );
	}

	function routeForIos(){
		extract($_REQUEST);
		settype($x, "double");
		settype($y, "double");
		settype($z, "double");
		$temp = $x;
		$x = $y;
		$y = $temp;
		echo $x;
		echo "<br>". $y;
		echo "<br>". $z;
		if(  $y > 2 && $x < -2)
			$flag = 9;
		else if(  $y > 2 && $x > 2)
			$flag = 7;  
		else if( $y < -1 && $x < -2 )
			$flag = 3;
		else if( $y < -1 && $x > 2 )
			$flag = 1;
		else if( $y > 2 )
			$flag = 8;
		else if( $y < -2 )
			$flag = 2;
		else if( $x < -2 )
			$flag = 6;
		else if( $x > 2 )
			$flag = 4;
		else 
			$flag = 5;

		//$this->writeFile( "X: " . $x . "<br>Y: " . $y . "<br>Z: " . $z . "<br>flag:" . $flag );
		$this->writeFile( $flag );
	}

	function writeFile( $data ){
		$myfile = fopen("data.txt", "w") or die("Unable to open file!");
		fwrite($myfile, $data);
		fclose($myfile);
	}
}

new WebService($_REQUEST["method"]);

 ?>

