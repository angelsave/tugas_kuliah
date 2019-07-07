


<!DOCTYPE html>


<html lang="en">


<head>


  <meta charset="UTF-8">


  <meta name="viewport" content="width=device-width, initial-scale=1.0">


  <meta http-equiv="X-UA-Compatible" content="ie=edge">


  <title>Table</title>


  <style type="text/css">


/*css script*/


h3 {


    font-weight: bold;


    text-align:center;


}


table{


  background-color:#C0C0C0;


}


td{


  text-align:center;


}


</style>


</head>


<body>


<form method="post" action="generate.php">


  <h3>Generate Tabel Fleksibel</h3>


  <div align="center">


    <table>


      <tr>


        <td>Rows</td>


        <td>


        <input name="JumlahRow" type="text" id="JumlahRow" onKeyUp="getmax();" onfocus="this.select();"/>


        </td>


      </tr>


      <tr>


        <td><label>Columns</label></td>


        <td>


        <input name="JumlahColum" type="text" id="JumlahColum" onKeyUp="getmax();" onfocus="this.select();"/>


        </td>


      </tr>


      <tr>


        <td>Cell Total </td>


        <td>


        <input name="JumlahCell" type="text" id="JumlahCell" onKeyUp="getmax();" onFocus="this.select();"/>


        </td>


      </tr>


      <tr>


        <td>Max Cells </td>


        <td>


        <input name="maxcells" type="text" id="maxcells" readonly="readonly" style="text-align:center"/>


        </td>


      </tr>


      <tr>


          <td><input type="submit" name="Generate" value="Generate"/></td>


          <td><input type="reset" name="Reset" value="Reset"/></td>


      </tr>


    </table>


  </div>


</form>


<script language="JavaScript" type="text/javascript">


function getmax() {


    var R = parseInt(document.getElementById('JumlahRow').value);


    var C = parseInt(document.getElementById('JumlahColum').value);


    var X = parseInt(document.getElementById('JumlahCell').value);


    var cellmax = document.getElementById('maxcells');


    var total = 'N/A';


    total = R * C;   


    cellmax.value = new String(total);


    if (X > total)


    {


      /*peringatan jika nilai yang dimasukan lebih besar dari total cells*/


        alert('Cell Total Yang Anda Masukkan Terlalu Besar, Nilai Maksimum Cells = ' + total);


        document.getElementById('CellsTotal').value = new String();


    }


}


</script>


</body>


</html>

