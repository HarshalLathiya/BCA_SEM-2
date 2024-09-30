<html>
	<head>
		<title>print_r/dump</title>
	</head>
	<body>
	<?php
	#write a php code to print array value through print_r.
	echo"<h2 align='center'>print array value through print_R.<br></h2>";
		$arr=array("roll"=>226,"Name"=>"Harshal","div"=>'B');
		echo"<h3>Print through Print_r :</h3>";
			print_r($arr);
		
		echo"<br><br>";
		
			echo"<h3>Print through var_dump :</h3>";
		var_dump($arr);
	?>
	</body>
</html>
	