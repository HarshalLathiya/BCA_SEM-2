<!DOCTYPE html>
<html lang="en">
<head>
    <title>Cookie</title>
</head>
<body>
    <h1  align="center">Set cookie for 1 hours</h1>
    <?php
    setcookie("Fy_bca", "students", time() + (60 * 60));
    if(isset($_COOKIE["Fy_bca"]))
    {
        echo "<h2 style ='color:Blue;'>Cookie is Active</h2>";
    }
    else
    {
        echo "<h2 style ='color:red;'>Cookie is InActive</h2>";
    }
    ?>
</body>
</html>