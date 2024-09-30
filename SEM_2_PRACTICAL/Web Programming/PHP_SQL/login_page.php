<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Login_page</title>
    <link rel="stylesheet" href="Login.css">
</head>
<body>
    <div class="main-container">
        <h1 class="heading">Login</h1>
  
        <form method="GET" name="f1">
            <div>
                <label class="lable">User Name : </label>
                    <input  type="username" name="txt_unm" placeholder="Enter username" class="input" >
            </div>
         <div>
                <label class="lable">Password: </label>
                    <input  type="password" name="txt_pwd" placeholder="Enter password" class="input">
        </div>
        <input type="submit" value="Login" class="button">
        </form>
    <?php
    if(isset($_GET["txt_unm"]) && $_GET["txt_pwd"]) 
    {
        if($_GET["txt_unm"] == "Harshal" && $_GET["txt_pwd"] == "3545")
        {
            session_start();
            $_SESSION["name"] = "Welcome to DashBord";
            echo $_SESSION["name"];
            header("location:dash_bord.php");
        }
        else
        {
           echo '<h3 style="color:red;">Invalid User name & password</h3>';
        }
    }
    ?>
		</div>
</body>
</html>