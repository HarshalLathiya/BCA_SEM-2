<html>
	<head>
		<title>Do_While loop</title>
		<style>
		h1{text-align:center;
		background-color:red;
		color:white;}
		</style>
	</head>
		<body bgcolor="cyan">
			<?php
				echo "<h1>Do_While loop</h1>";
				$i=0;
				do
				{
				echo $i,"<br>";
				$i+=2;
				}while($i<=10)
			?>
		</body>
	</html>