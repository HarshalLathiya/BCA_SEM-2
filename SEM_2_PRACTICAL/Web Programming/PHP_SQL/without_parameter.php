<html>
	<head>
		<title>func_num_args</title>
	</head>
	<body>
<?php 
#Write a php code to Count the number of Argument without parameter
	function fun()
	{
		for($i=0;$i<func_num_args();$i++)
		echo "<br>",func_get_arg($i);;
	}
		fun("Harshal",10,1.5,'J');
?>
</body>
</html>