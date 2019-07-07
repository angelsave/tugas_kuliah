
<!DOCTYPE html>

<html lang="en">

<head>

  <meta charset="UTF-8">

  <meta name="viewport" content="width=device-width, initial-scale=1.0">

  <meta http-equiv="X-UA-Compatible" content="ie=edge">

  <title>Hasil Generate</title>

  <style>

  .footer{

    width: 100%;

    height: 60px;

    text-align:center;

    line-height: 30px;

    background: #333;

    color: #fff;

    position: absolute;

    bottom: 0px;

}

</style>

</head>

<body>

<div align="center">

  <?php

if (isset($_POST['JumlahRow']) AND isset($_POST['JumlahColum']) AND isset($_POST['JumlahCell']))

{

   $rows=(int) $_POST['JumlahRow'];

   $columns=(int) $_POST['JumlahColum'];

   $cells=(int) $_POST['JumlahCell'];

}

else

{

   die("<h3>Maaf, anda harus mengakses halaman ini dari table.php</h1>");

}

  

if(empty($rows))

{

   die("Maaf, anda harus mengisi rows");

}


?>

<br>

  <strong>Kamu Memilih</strong> <?php echo $rows; ?> <em>baris,</em><br />

  <strong>Kamu Memilih</strong> <?php echo $columns; ?> <em>kolom,</em><br />

  <strong>Dan Anda Membutuhkan</strong> <?php echo $cells; ?> <em>sel,</em><br />

  <br />

  <br />

  <?php

    $width = $columns * 75;

    echo "<table width=".$width." border=1>";

    $baris = 0;

    $sel = 1;

    while ($baris < $rows && $sel <= $cells)

    {

        echo "<tr>";

        $cl = 0;

        while ($cl < $columns)

        {

            if ($sel <= $cells)

            {

                echo "<td><div align=center>".$sel."</div></td>";

                $sel++;

            }

            $cl++;

        }

        echo "</tr>";

        $baris++;

    }

    echo "</table>";

?>

</div>

<div class="footer">

<p>&copy;Jowo Koding</p>

</div>

</body>

</html>