<!DOCTYPE html>
<html lang="en">

<head>
    <title>Shope_data</title>
</head>

<body>
    <?php
    include 'connection_file.php';
    //$table = mysqli_query($con,"create table genralstore(sr_No int,Product_name varchar(20),quantity int,price int)");
    //mysqli_query($con, "delete from genralstore where sr_No=2");
    //mysqli_query($con,"update genralstore set product_name='green_pen' where sr_NO=2");
    //mysqli_query($con, "insert into genralstore values(2,'Black pen',10,50)");
    if (isset($_GET["sr_number"]) && isset($_GET["product_name"])) {
        $sr_number = $_GET["sr_number"];
        $pro_name = $_GET["product_name"];
        $quantity_number = $_GET["quantity_number"];
        $price = $_GET["price"];

        $ins = mysqli_query($con, "insert into genralstore values($sr_number,'$pro_name',$quantity_number,$price)");
        if ($ins) {
            echo "Data has been Enterd";
        } else {
            echo "Data has not been Enterd";
        }
    }
    ?>
    <form action="" method="GET">
        Sr.number:<input type="number" name="sr_number" max="100" min="1" required>
        Product_Name:<input type="text" name="product_name" required>
        Quantity:<input type="text" name="quantity_number" required>
        price:<input type="number" name="price" required>
        <input type="submit" name="btn_sub">
    </form>
</body>

</html>