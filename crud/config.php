<?php
$config = mysqli_connect("localhost","root","linux94","crud");
if(mysqli_connect_errno()){
	echo "Koneksi Gagal". mysqli_connect_error();
}