<?php
include 'connection_file.php';
$select = mysqli_query($con, "select * from ragistar");
if ($select) {
    // $fetch = mysqli_fetch_array($select);
    $fetch = mysqli_fetch_assoc($select);
    echo "<br><br>";
    print_r($fetch);
    echo "<br><br>";
    echo "Fetch data Successfully";
} else {
    echo "Something wrong in fetch";
}
?>