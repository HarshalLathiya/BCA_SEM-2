<html>
	<head>
		<title>submit_page</title>
	</head>
	<body bgcolor="silver">
		
		 <?php
    // Check if the form is submitted
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
	{
        // Retrieve values from $_POST array
        $roll_number = $_POST['roll_number'];
        $name = $_POST['name'];
        $address = $_POST['address'];
        
        // Print the values
		echo "<center>";
        echo "<h1>Student Information:</h1>";
		echo "Name: " . $name . "<br>";
        echo "Roll Number: " . $roll_number . "<br>";
        echo "Address: " . $address . "<br>";
		echo "</center>";
    }
    ?>	
	</body>
</html>
	