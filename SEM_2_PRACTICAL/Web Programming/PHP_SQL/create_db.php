<!DOCTYPE html>
<html lang="en">
<head>
    <title>Create Database</title>
</head>
<body>
    <?php
    $con=mysqli_connect("localhost","root","","Harshal_226");
    if($con)
    {
        echo"Database is connected";
        //$db=mysqli_query($con,"create database Harshal_226");
        $table=mysqli_query($con,"create table students(Roll_number int,Name varchar(10),Age int,Email varchar(50))");

          if($table)
        {
            echo "Table is Created";
        }
        else
        {
            echo "Table is Not created";
        }
    }
    else
    {
        echo "Database is not connected";
    }
    ?>
</body>
</html>