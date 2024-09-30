<html>
	<head>
		<title>Recursion</title>
	</head>
	<body>
	<?php
		#write a php program to create recursion 
		function bca($a)
		{
			echo "HELLO BCA : $a<br>"; 
			if($a<5)
			{
			$a++;
			bca($a);
			}
		}
		bca(1);
	?>
	</body>
</html>
	