<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>dash_bord</title>
</head>
<body>
 <?php
    session_start(); 
    if(isset($_SESSION["name"]))
    {
        echo $_SESSION["name"];
    }
    else
    {
         header("location:login_page.php");
    }
     session_destroy(); 
 ?>
</body>
</html>