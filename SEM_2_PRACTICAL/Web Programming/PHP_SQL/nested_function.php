<html>
	<head>
		<title>Nested function</title>
	</head>
	<body>
	<?php
		#write a php program to create user define function within  user define function
		function bca()#outer function
		{
			echo "outer function:";
			echo "HELLO BCA<br><br>";
			
			function bsc()#inner function
			{
				echo "inner function:";
				echo "HELLO BCS";
			}
		}
		bca();
		bsc();
	?>
	</body>
</html>
	