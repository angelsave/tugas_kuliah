<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <link rel="stylesheet" href="css/bootstrap.min.css">
  <title>UNUGIRI</title>
</head>
<body>
  <!-- Navbar Start-->
  <nav class="navbar navbar-expand-lg navbar-light bg-success">
  <a class="navbar-brand" href="index.php"><img src="img/unugiri.png" class="h-25 d-inline-block" style="width: 100px;"></a>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>
  <div class="collapse navbar-collapse" id="navbarSupportedContent">
    <ul class="navbar-nav mr-auto">
      <li class="nav-item active">
        <a class="nav-link" href="index.php">HOME</a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="profile.php">PROFILE</a>
      </li>
         <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
          GALLERY
          </a>
          <div class="dropdown-menu bg-success" aria-labelledby="navbarDropdown">
          <a class="dropdown-item" href="picture.php">PICTURE</a>
          <a class="dropdown-item" href="video.php">VIDEO</a>
        </div>
      </li>
      <li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
          SAINTEK
        </a>
        <div class="dropdown-menu bg-success" aria-labelledby="navbarDropdown">
          <a class="dropdown-item" href="teknik-informatika.php">Teknik Informatika</a>
          <a class="dropdown-item" href="sistem-informasi.php">Sistem Informasi</a>
          <a class="dropdown-item" href="teknik-komputer.php">Teknik Komputer</a>
          <!-- <div class="dropdown-divider"></div>
          <a class="dropdown-item" href="#">Something else here</a> -->
        </div>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="about.php">ABOUT</a>
      </li>
    </ul>
    <form class="form-inline my-2 my-lg-0">
      <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
      <button class="btn btn-outline-light my-2 my-sm-0" type="submit">Search</button>
    </form>
  </div>
</nav>
<!--end navbar-->