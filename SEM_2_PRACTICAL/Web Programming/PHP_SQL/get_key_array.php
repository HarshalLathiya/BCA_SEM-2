<html>
	<head>
		<title>Get key</title>
	</head>
	<body>
	<?php
	#How to get key of asociative array using foreach
	echo"<h3 align='center'>Get key of asociative array</h3>";
			$a=array("Name :"=>"Harshal","Rollno :"=>226,"Div :"=>'B');
			foreach($a as $k=>$new)
			{
			echo $k," ",$new,"<br>";
			}
	?>
	</table>
	</body>
</html>
	