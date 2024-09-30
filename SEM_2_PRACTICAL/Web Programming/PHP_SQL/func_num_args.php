<html>
	<head>
		<title>func_num_args</title>
	</head>
	<body>
<?php 
#Write a php code to Count the number of Argument in function call
	echo "<h1>Func_num_args : Count the number of Argument in function call</h1>";
	fun(10);
	function fun()
	{
		$a= func_num_args();
		echo "<br> Value of Argument : ".$a;
	}
	fun("Harshal",10,1.5,'J');
?>
</body>
</html>