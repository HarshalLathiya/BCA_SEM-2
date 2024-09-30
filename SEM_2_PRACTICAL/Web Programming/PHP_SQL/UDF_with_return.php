<html>
	<head>
		<title>UDF</title>
	</head>
	<body>
	<?php
		#write a php program to create user define function and return the value
		$num=10;
		function bca($num)
		{
			echo "Value of num :",$num,"<br>";
			return $num+100;
		}
		$ret=bca($num);
		echo "Return value is:",$ret;
	?>
	</body>
</html>
	