<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Math Problems</title>
</head>
<body>
    <h1>Math Problems</h1>
    <?php
        function solve_math_problem($num1, $num2) {
            return $num1 + $num2;
        }
    ?>
    <form action="" method="post">
        <label for="num1">Enter a number:</label>
        <input type="text" id="num1" name="num1"><br><br>
        <label for="num2">Enter another number:</label>
        <input type="text" id="num2" name="num2"><br><br>
        <input type="submit" value="Solve Math Problem">
    </form>
    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $num1 = $_POST["num1"];
            $num2 = $_POST["num2"];
            echo "The solution is: " . solve_math_problem($num1, $num2);
        }
    ?>
</body>
</html>