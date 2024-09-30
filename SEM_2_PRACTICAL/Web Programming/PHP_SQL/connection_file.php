<!DOCTYPE html>
<html lang="en">
<head>
    <title>Connection_file</title>
</head>
<body>
    
    <?php
    $con = mysqli_connect("localhost", "root","","workspace");
    if($con)
    {
        echo "File Connect Successfully.";
    }
    else
    {
        echo "File Connection loss...!";
    }
    ?>    

</body>
</html>