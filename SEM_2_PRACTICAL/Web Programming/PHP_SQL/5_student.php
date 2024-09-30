<html>
	<head>
		<title>Result</title>
	</head>
	<body bgcolor="silver">
	<?php
	#write a php code to print result of 5 student
	echo"<h3 align='center' style='background-color:purple; color:white;' > Print result of 5 student</h3>";
	echo "<table border=1 align='center' style='background-color:white;'>";
		$a=array(
			array("Name :"=>"Harshal","Rollno :"=>226,"Div :"=>'B',"Marks:"=>100),
			array("Name :"=>"Sufiyan","Rollno :"=>225,"Div :"=>'B',"Marks:"=>90),
			array("Name :"=>"Dharmik","Rollno :"=>397,"Div :"=>'B',"Marks:"=>80),
			array("Name :"=>"Abrar","Rollno :"=>101,"Div :"=>'A',"Marks:"=>70),
			array("Name :"=>"Mitul","Rollno :"=>228,"Div :"=>'B',"Marks:"=>75)
			);
			foreach($a as $new)
			{
				echo "<tr>";
				foreach($new as $new=>$j)
				{
					echo "<td>";
						echo $j ,"<br>";
					echo "</td>";
				}
				echo "</tr>";
			}
			echo "</table>";
	?>
	</body>
</html>
	