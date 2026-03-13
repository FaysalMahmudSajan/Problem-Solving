<!-- intro -->

<!-- <?php
        echo "Nazmul Hassan Ovi <br>";
        echo "It's really good";
        // this is a comment

        /*
this is multiline comment
Oho! i got it*/

        ?> -->

<!--
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <br>
    <button>Oder a person</button>
</body>
</html> -->

<!-- echo -->
<!-- <?php
        //variable= a reusable container that holds data string, integer, float, boolean

        $name = "Nazmul hassan Ovi";
        $food = "Kacchi";
        $email = "fake@gmaile.com";
        $age = 26;
        $cgpa = 3.98;
        $price = 3;

        $pass = true;


        echo $name, "<br>";
        echo "Hello, ", $name;
        echo "<br>Thanks, {$name}<br>";
        echo "{$name} likes {$food}<br> your email address is {$email}<br>";
        echo "Your age $age and your cpga is $cgpa<br>";
        echo "Your $food is \$$price<br>";
        $mul = $pass + $age * $cgpa - $price;
        echo "Ovi multiply = $mul";

        ?> -->


<!-- variable -->

<!-- <?php
        //arithmetic operators + - * ** / %
        //increment/decrement ++ --
        /* operator precedence 
1. () 
2. **
3. * , /, %
4. +,-
 */

        $x = 10;
        $y = 2;
        echo $x + $y;
        echo "<br>";
        echo $x * $y;
        echo "<br>";
        echo $x - $y;
        echo "<br>";
        echo $x % $y;
        echo "<br>";
        echo $x / $y;
        echo "<br>";
        echo $x ** $y;
        echo "<br>";
        $count = 0;
        for ($i = 0; $i < 5; $i++) {
            $count += 2;
            echo "{$i} ";
        }
        echo "<br>";
        echo $count;
        ?> -->


<!-- $_GET and $_POST -->

<!-- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="index.php" method="get">
        <label>username:</label>
        <input type="username" name="username"><br>
        <label>password:</label>
        <input type="password" name="password"><br>
        <input type="submit" value="Log in">
    </form>
</body>

</html>

<?php
//$_GET and $_POST

echo $_GET["username"] . "<br>";
echo $_GET["password"];

?> -->

<!-- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="index.php" method="get">
        <label>Food:</label>
        <input type="text" name="Food"><br>
        <label>Price:</label>
        <input type="float" name="Price"><br>
        <label>Quantity:</label>
        <input type="number" name="Quantity"><br>
        <input type="submit" value="Total">
    </form>
</body>

</html>

<?php
//$_GET and $_POST
$food = $_GET["Food"];
$price = (float)$_GET["Price"];
$quntity = (int)$_GET["Quantity"];
echo "You have ordered {$quntity}x $food <br>";
$total = $price * $quntity;
echo "Your total bill is $$total";
?> -->

<!-- math function -->
<!-- <?php
        $total = max(1, 4, 2, 56, 364, 8);
        //abs(),round(),floor(),ceil(),sqrt(),pow(),min(),max();
        echo $total . "<br>";
        echo pow(2, 3) . "<br>";
        echo pi() . "<br>";
        //rand(min,max)
        echo rand(0, 2) . "<br>";


        ?> -->

<!-- <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="index.php" method="post">
        <label>Radius: </label>
        <input type="float" name="Radius">
        <input type="submit" value="submit">
    </form>
</body>
</html>
<?php
$radius = $_POST["Radius"];
$circumference = null;
$circumference = ($radius * 2 * pi());
echo "Circumference: $circumference cm <br>";
$area = pi() * pow($radius, 2);
echo "Area: $area  cm<sup>2</sup>";

?> -->

<!-- if statement -->
<!-- <?php
        $age = 14;
        if ($age >= 18) {
            echo "Vote";
        }
        //else if
        else echo "Not Vote";
        ?> -->

<!-- logical operator -->
<!-- <?php
        //and or && || 
        $num = (1 || 0);
        echo $num;
        ?> -->

<!-- switch same as c/c++ -->
<!-- <?php
        $date = date("Y-m-d l");
        echo $date;
        ?> -->


<!-- for loop -->
<!-- <?php
        $n = 10;
        for ($i = 1; $i <= $n; $i += 2)
            echo $i . ". Hello <br>";

        ?> -->

<!-- while loop -->

<!-- array -->
<!-- <?php
        // $food=array('kacchi','pizza','fish fry');
        // for($i=0;$i<=2;$i++){
        //     echo $food[$i]."<br>";
        // }

        $food = array('kacchi', 'pizza', 'fish fry');
        array_push($food, 'dail', 'kiwi');
        array_pop($food);
        // array_shift($food);
        $rev_food = array_reverse($food);
        foreach ($rev_food as $i)
            echo $i . "<br>";
        ?> -->

<!-- associative arrays -->

<!-- <?php

        $capital = array(
            "Bangladesh" => "Dhaka",
            "USA" => "DC",
            "Pakistan" => "Karachi",
            "Afganistan" => "Kabul",
        );
        // echo $capital["Bangladesh"]."<br>";
        // echo $capital["Pakistan"];

        $capital["China"] = "Bejing";

        foreach ($capital as $key => $value) {
            echo "$key = $value <br>";
        }
        //array_push(), array_key($capital),array_value($capital),count($capital);
        $key = array_keys($capital);
        foreach ($key as $key) {
            echo "$key <br>";
        }

        ?> -->

<!-- isset() & empty() -->

<!-- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="index.php" method="post">
        <label for="">username</label>
        <input type="text" name="username"></input>
        <br>
        <label for="">Password</label>
        <input type="password" name="Password"></input><br>
        <input type="submit" name="login" value="log in"></input>

    </form>
</body>

</html>

<?php
if (isset($_POST["login"])) {
    $username = $_POST["username"];
    $password = $_POST["Password"];
    if (empty($username)) {
        echo "Username is required <br>";
    } else if (empty($password)) {
        echo "Password is required";
    } else {
        echo "Hello, $username";
    }
}
?>
foreach($_POST as $key=>$value){
    echo $key ."=". $value;
-->

<!-- radio buttons -->
<!-- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="index.php" method="post">
        <input type="radio" value="Visa" name="cd">Visa<br>
        <input type="radio" value="Mastercard" name="cd">Mastercard<br>
        <input type="radio" value="American Express" name="cd">American Express<br>
        <input type="submit" value="confirm" name="confirm">

    </form>
</body>

</html>

<?php
if (isset($_POST["confirm"])) {
    if (isset($_POST["cd"]))
        echo $_POST["cd"];
    else echo "None";
}
// $credit_card=$_POST["credit_card"];

?> -->

<!-- checkbox -->

<!-- <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="index.php" method="post">
        <input type="checkbox" name="foods[]" value="fish">Fish<br>
        <input type="checkbox" name="foods[]" value="tomato">Tomato<br>
        <input type="checkbox" name="foods[]" value="potato">Potato<br>
        <input type="checkbox" name="foods[]" value="lichi">Lichi<br>
        <input type="submit" value="Submit" name="submit">
    </form>
</body>

</html>

<?php
if (isset($_POST['submit'])) {
    $foods = $_POST['foods'];
    foreach ($foods as $food) {
        echo $food . "<br>";
    }
}
?> -->

<!-- function -->

<!-- <?php
        function happy_birthday($x)
        {
            echo "Happy birthday to $x.<br>";
            echo " Have a nice day, $x <br> <br>";
        }
        happy_birthday("Ovi");
        happy_birthday("Proyash");
        happy_birthday("Masuk");

        ?> -->

<!-- string function -->
<!-- <?php

        $username = "Faysal";

        $username = strtoupper($username);
        echo $username;

        ?> -->

<!-- sanitize/validate input -->

<!-- <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Faysal</title>
</head>
<body>
    <form action="index.php" method="post">
    <p>Username:</p> <input type="text" name="username">
        <input type="submit" value="login" name="login">
    </form>

 
</body>
</html>

<?php
if (isset($_POST["login"])) {
    $username = filter_input(INPUT_POST, "username", FILTER_SANITIZE_SPECIAL_CHARS);
    // $username=$_POST["username"];
    echo "Hello, $username";
}
?> -->

<!--include()  -->

<!-- <?php
        include("Fx.html");
        ?> -->

<!-- _COOKIE -->
<!-- <?php
        setcookie("fav_food", "Pizza", time() + (86400 * 2), "/");
        ?> -->

<!-- session -->



<!-- test -->
