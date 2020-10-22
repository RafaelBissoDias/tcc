<!DOCTYPE html>
<html>
<head>
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title></title>
	<link rel="stylesheet" type="text/css" href="css/style.css">
  <link rel="icon" type="imagem/png" href="./img/logo.png" />
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<body>

<div class="topnav" id="myTopnav">
  <a href="index.html" >Inicio</a>
  <a href="produto.html">Jogos</a>
  <a href="consoles.html">Eletrônicos</a>
  <a href="contato.html">Contatos - Fale conosco</a>
  <a href="quemsomos.html">Quem somos?</a>
  <a href="acesso.html" style="float: right;">Login</a>
  <a href="acesso.html" style="float: right;">
    <img src="icone/iconecarrinho3.png" style="width: 22px; height: 18px;position: relative; bottom: -3px;">
  </a>
  <a href="javascript:void(0);" class="icon" onclick="myFunction()">
    <i class="fa fa-bars"></i>
  </a>
</div>


</div>

    <div class="slide" >
  <a href="#">
    <img class="mySlides" src=".\img\PUBG.jpg"></a>
  <a href="#">
    <img class="mySlides" src=".\img\THEWITCHER.png"></a>
    <a href="#">
    <img class="mySlides" src=".\img\FCP.jpg"></a>
  <a href="#">
    <img class="mySlides" src=".\img\HZD.jpg"></a>
</div>
<script>
var myIndex = 0;
carousel();

function carousel() {
  var i;
  var x = document.getElementsByClassName("mySlides");
  for (i = 0; i < x.length; i++) {
    x[i].style.display = "none";  
  }
  myIndex++;
  if (myIndex > x.length) {myIndex = 1}    
  x[myIndex-1].style.display = "block";  
  setTimeout(carousel, 2000); 
}
function myFunction() {
  var x = document.getElementById("myTopnav");
  if (x.className === "topnav") {
    x.className += " responsive";
  } else {
    x.className = "topnav";
  }
}
</script> 

<div class="bannerin">
      <h1> EM DESTAQUE </h1>
    </div>

<div class="inicio">
  
<div class="container">
  <a href="produto.html">
  <img src="img/hzd-produtos.png" alt="Avatar" class="image">
  <div class="overlay">
    <div class="text"><img src="gif/hzd.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/ST5-produtos.jpg" alt="Avatar" class="image">
  <div class="overlay">
    <div class="text"><img src="gif/sf5.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/GOW-produtos.jpg" alt="Avatar" class="image">
  <div class="overlay-left">
    <div class="text"><img src="gif/gow.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/mkx-produtos.jpg" alt="Avatar" class="image">
  <div class="overlay-left">
    <div class="text"><img src="gif/mk.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/THEWITCHER-produtos.png" alt="Avatar" class="image">
  <div class="overlay">
    <div class="text"><img src="gif/thewt.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/FCP-produtos.png" alt="Avatar" class="image">
  <div class="overlay">
    <div class="text"><img src="gif/fcp.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/bb-produtos.jpg" alt="Avatar" class="image">
  <div class="overlay-left">
    <div class="text"><img src="gif/bb.gif"></div>
  </div>
  </a>
</div>
<div class="container">
  <a href="produto.html">
  <img src="img/Unc4-produtos.png" alt="Avatar" class="image">
  <div class="overlay-left">
    <div class="text"><img src="gif/unc4.gif" ></div>
  </div>
  </a>
</div>

</div>

<div class="footer">
</div>
</body>
<footer>
  <h1 class="logo"><img src="./img/logo.png" alt="Instituto Feira Livre" style="width: 220px; height: 180px;position: relative;"> </h1>
</footer> 
</html>
