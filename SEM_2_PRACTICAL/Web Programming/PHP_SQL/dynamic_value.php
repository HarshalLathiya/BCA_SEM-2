<!DOCTYPE html>
<html>
<head>
    <title>Student Information</title>
</head>
<body bgcolor="silver">
<table>
    <form action="submit_page.php" method="post">
	<tr>
		<td>
		<label for="name">Name:&nbsp;&nbsp;&nbsp;&nbsp;</label>
		<input type="text" id="name" name="name">
		</td>
	</tr>
		<tr>
			<td>
				<label for="roll_number">Roll NO:</label>
				<input type="text" id="roll_number" name="roll_number"><br>
			</td>
		</tr>
	<tr>
		<td>
			<label for="address">Address:</label>
			<input type="text" id="address" name="address"><br><br>
		</td>
	</tr>
		<tr>
			<td>
				<input type="submit" value="Submit">
			</td>
		</tr>
    </form>
	</table>
</body>
</html>
