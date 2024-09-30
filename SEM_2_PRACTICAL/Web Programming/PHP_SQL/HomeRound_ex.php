<!DOCTYPE html>
<html lang="en">
<head>
    <title>Homeround_ex</title>
</head>

<body>
    <?php
	$con = mysqli_connect("localhost", "root","","college");
	//$db = mysqli_query($con,"create database college");
	//$table = mysqli_query($con,"create table student (Roll_number int, Name varchar(20),Address varchar(50),Mobile_no int)");
    if (isset($_GET["btn_sub"])) 
	{
        $roll_number = $_GET["number"];
		$name = $_GET["txt_name"];
		$address = $_GET["txt_adrs"];
		$mo_no = $_GET["contect"];
        $ins = mysqli_query($con,"insert into student values($roll_number,'$name','$address',$mo_no)");
        if($ins) 
		{
            echo "Data has been Enterd";
        } 
		else 
		{
            echo "Data has not been Enterd";
        }
		
    }
    ?>
    <form action="" method="GET">
        Roll_number:<input type="number" name="number" max="100" min="0">
		Name:<input type="text" name="txt_name">
		Address:<input type="text" name="txt_adrs">
		Mobile_number:<input type="text" name="contect">
		<input type="submit" name="btn_sub">
    </form>
</body>
</html>