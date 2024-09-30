<!DOCTYPE html>
<html lang="en">
<head>
    <title>Perfect Number</title>
</head>
<body>
    <?php
    $num = 6;
    $sum = 0;
    echo "Number is $num ";
    for ($i = 1; $i < $num; $i++) {
        if ($num % $i == 0) {
            $sum += $i;
        }
    }
    if ($sum == $num) {
        echo "It's perfect";
    } else {
        echo "It's not perfect";
    }
    ?>
</body>
</html>
