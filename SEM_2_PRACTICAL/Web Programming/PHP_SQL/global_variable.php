<html>
	<head>
		<title>global_variable</title>
	</head>
	<body>
	<?php
	#write a php program to define global variable
    	global $main;
		$main=100; 
	fy($main);
	function fy($main)
	{
		echo "function 1 global variable value :",$main,"<br><br>";
		$fun=50;
		echo "funcation local variable  value : ",$fun,"<br><br>";
	}
	sy($main);
	function sy($main)
	{
		echo "funcation 2 global variable value :",$main,"<br><br>";
	}
	?>
	</body>
</html>