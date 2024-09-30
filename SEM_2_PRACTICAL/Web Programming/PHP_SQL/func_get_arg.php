<html>
	<head>
		<title>func_get_arg</title>
	</head>
	<body>
<?php 
#Write a php code to get single value from function call
	echo "<h1>Func_get_arg : it will get a single value from funtion call</h1>";
	function fun()
	{
		$a= func_get_arg(0);
		echo "<br> Value of Argument : ".$a;
	}
	fun("Harshal",10,1.5,'J');
?>
</body>
</html>