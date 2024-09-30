<html>
	<head>
		<title>local_variable</title>
	</head>
	<body>
	<?php
	#write a php program to define local variable
	$main=10;
	fy($main);
	function fy($main)
	{
		echo "main variable value :",$main,"<br><br>";
		$fun=50;
		echo "funcation variable  value:",$fun,"<br><br>";
	}
	echo "outside the function:",$main;
	?>
	</body>
</html>