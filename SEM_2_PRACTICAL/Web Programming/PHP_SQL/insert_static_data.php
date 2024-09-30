<!DOCTYPE html>
<html lang="en">
<head>
    <title>Insert data</title>
</head>
<body>
    <?php
    $con=mysqli_connect("localhost","root","","Harshal_226");
    if($con)
    {
        echo"Database is connected","<br>";
        //$db=mysqli_query($con,"create database Harshal_226");
        //$table=mysqli_query($con,"create table students(Roll_number int,Name varchar(10),Age int,Email varchar(50))");
        $ins=mysqli_query($con,"insert into students values(226,'Harshal',19,'harshalplathiya@gmail.com')");
         $ins=mysqli_query($con,"insert into students values(227,'mihir',24,'mihirlathiya@gmail.com')");
          $ins=mysqli_query($con,"insert into students values(228,'nikhil',22,'nikhil_lathiya@gmail.com')");
           $ins=mysqli_query($con,"insert into students values(229,'varshil',20,'varshil_lathiya@gmail.com')");
            $ins=mysqli_query($con,"insert into students values(230,'meet',17,'meet@gmail.com')");
        if($ins)
        {
            echo "Record has been inserted";
        }
        else
        {
            echo "Record does not inserted";
        }
    }
    else
    {
        echo "Database is not connected","<br>";
    }
    ?>
</body>
</html>