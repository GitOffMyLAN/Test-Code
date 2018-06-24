<?php
/*
	if($_GET['username'] != '' && $_GET['email'] != ''){
		$setUsername = htmlentities($_GET['username']);
		$setEmail = htmlentities($_GET['email']);
		echo $setUsername;
	} else {
		echo "<script>alert('Please fill the entire form out plesase');</script>";
	}*/
if($_POST['username'] != '' && $_POST['email'] != ''){
		$setUsername = htmlentities($_POST['username']);
		$setEmail = htmlentities($_POST['email']);
		echo $setUsername;
}	else {
		echo "<script>alert('Please fill the entire form out plesase');</script>";
	}

?>
<!DOCTYPE html>
<html>
	<head>
		<title>PHP get and post test site</title>
	</head>
	<body>
		<form action="getpost.php" method="POST">
			<h1>Username</h1>
			<input placeholder="username" name="username"></input>
			<h1>Email</h1>
			<input placeholder="e-mail" name="email"></input>
			<button>Submit</button>
		</form>
	</body>
</html>
