<!DOCTYPE html>
<html lang="en">

<head>
    <title>Dynamic_record</title>
</head>

<body>
    <?php
    include 'connection_file.php';
    // $table = mysqli_query($con,"create table ragistar (Roll_number int, Name varchar(20))");
    //mysqli_query($con,"delete from ragistar where roll_number=0");
    //  mysqli_query($con,"update ragistar set name='Harshal' where roll_number=40");
    // mysqli_query($con,"insert into ragistar values(50,'Aadhiya')");
    if (isset($_GET["txt_name"]) && isset($_GET["number"])) {
        $name = $_GET["txt_name"];
        $roll_number = $_GET["number"];
        $ins = mysqli_query($con, "insert into ragistar values($roll_number,'$name')");
        if ($ins) {
            echo "Data has been Enterd";
        } else {
            echo "Data has not been Enterd";
        }
    }
    ?>
    <form action="" method="GET">
        Name:<input type="text" name="txt_name">
        Roll_number:<input type="number" name="number" max="100" min="0">
        <input type="submit" name="btn_sub">
    </form>
</body>

</html>