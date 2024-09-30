<html>
	<head>
		<title>Nested If else</title>
		<style>
			h1{
			text-decoration:underline;
			text-align:center;
			background-color:purple;
			color:white;
			}
			</style>
	</head>
	<body bgcolor="silver">
		<?php
		#write a php program to find largest number using nested if else
		print "<h1>Largest Number<br></h1>";
	$num1=10;
	$num2=50;
	$num3=40;
		echo "<h2>Value of num1 : $num1<br>";
			echo "Value of num2 : $num2<br>";
				echo "Value of num3 : $num3<br><br>";
	if($num1>=$num2)
	{
		if($num1>=$num3)
		{
			echo "Num1 is Largest";
		}
		else
		{
			echo"Num3 is Largest";
		}
	}
	else
	{
		if($num2>=-$num3)
		{
			echo "Num2 is Largest";
		}
		else
		{
			echo "Num3 is Largest","</h2>";
		}
	}
		?>
	</body>
</html>