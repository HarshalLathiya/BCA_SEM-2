<html>
	<head>
		<title>Ladder if else</title>
			<style>
			h1{
			text-decoration:underline;
			text-align:center;
			background-color:red;
			color:yellow;
			}
			</style>
	</head>
	<body bgcolor="cyan">
		<?php
		#write a php program to your age is valid or not for voting using ladder if else
			$num1=2005;
			$num2=2024;
			$num3;
				print "<h1>Name: Lathiya Harshal<br></h1>";
				echo "<h2>Enter Born year : $num1<br>";
				echo "Enter current year : $num2<br>";
				$num3=$num2-$num1;
				echo "Your age is : $num3<br><br>";
	if($num3>100)
	{
		echo"Take a rest";
	}
		else if($num3<0)
	{
		echo "invalid value";
	}
		else if($num3>18)
	{
		echo "Able for voting";
	}
	else
	{
		echo"Unable for voting";
	}
	?>
	</body>
</html>
