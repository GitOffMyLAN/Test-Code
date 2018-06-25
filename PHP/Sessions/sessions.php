<?php
	session_start();
	$_SESSION['name'] = htmlentities($_POST['username']);
	$_SESSION['email'] = htmlentities($_POST['email']);
	header('sessions-test.php');
?>
<!DOCTYPE html>
<head>
	<title>PHP Sessions</title>
</head>
<body>
	<form action='sessions.php' method='POST'>
		<p>Username</p>
		<input type='text' name='username'>
		<p>E-Mail</p>
		<input type='email' name='email'>
		<input type='submit'>
	</form>
</body>
