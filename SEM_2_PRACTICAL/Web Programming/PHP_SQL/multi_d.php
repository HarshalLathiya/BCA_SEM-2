<html>
	<head>
		<title>multi-D Array</title>
	</head>
	<body>
	<table border="5" style="color:red;" align="center">
	<?php
	#write a php code to perform multi-D Array.
	echo"<h3 align='center'>multi-d Array in table</h3>";
	$a=array(
			array(1,2,3),
			array(4,5,6),
			array(7,8,9)
			);
			foreach($a as $new)
		{
			echo"<tr>";
				foreach($new as $in)
		{
			echo "<td>",$in,"</td>";
		}
		echo "</tr>"; 
			echo"<br>";
		}
	?>
	</table>
	</body>
</html>
	