<?php include "template/header.php";?>
<div class="clearfix"> </div> 
<div id="carouselExampleIndicators" class="carousel slide" data-ride="carousel">
  <ol class="carousel-indicators">
    <li data-target="#carouselExampleIndicators" data-slide-to="0" class="active"></li>
    <li data-target="#carouselExampleIndicators" data-slide-to="1"></li>
    <li data-target="#carouselExampleIndicators" data-slide-to="2"></li>
  </ol>
  <div class="carousel-inner">
    <div class="carousel-item active">
      <img src="img/unugiri.jpg" class="d-block w-100" style="height:500px;" alt="...">
    </div>
    <div class="carousel-item">
      <img src="img/mapala.jpg" class="d-block w-100" style="height:500px;" alt="...">
    </div>
    <div class="carousel-item">
      <img src="img/itcamp.jpg" class="d-block w-100" style="height:500px;" alt="...">
    </div>
  </div>
  <a class="carousel-control-prev" href="#carouselExampleIndicators" role="button" data-slide="prev">
    <span class="carousel-control-prev-icon" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="carousel-control-next" href="#carouselExampleIndicators" role="button" data-slide="next">
    <span class="carousel-control-next-icon" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
<hr>
<h1 class="text-center">POPULAR POST</h1>
<hr>
 <!--content---->
 <div class="row pb-5">
  <div class="col-sm-6">
    <div class="card">
    <img src="img/mapala.jpg" class="card-img-top" style="height:200px" alt="...">
      <div class="card-body">
        <h5 class="card-title">Mapala Unugiri</h5>
        <p class="card-text">Mapala unugiri adalah sebuah UKM tempat berkumpulnya mahasiswa pecinta alam</p>
        <a href="#" class="btn btn-primary">...Continue reading</a>
      </div>
    </div>
  </div>
  <div class="col-sm-6">
    <div class="card">
        <img src="img/itcamp.jpg" class="card-img-top" style="height:200px" alt="...">
      <div class="card-body">
        <h5 class="card-title">IT Camp</h5>
        <p class="card-text">Sebuah kegiatan agenda tahunan bagi seluruh mahasiswa TI untuk membantu memperkenalkan jurusan TI</p>
        <a href="#" class="btn btn-primary">...Continue reading</a>
      </div>
    </div>
  </div>
</div>
<!--End content-->
<?php include "template/footer.php";?>
