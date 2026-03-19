<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>For You 💙</title>

  <style>
    body {
      margin: 0;
      font-family: Arial, sans-serif;
      background: #0a1a2f;
      color: white;
      text-align: center;
      overflow: hidden;
    }

    h1 {
      margin-top: 80px;
    }

    button {
      padding: 12px 20px;
      margin: 10px;
      border: none;
      border-radius: 20px;
      background: #1f4068;
      color: white;
      font-size: 16px;
      cursor: pointer;
    }

    .letter {
      display: none;
      margin: 20px auto;
      max-width: 600px;
      background: #162447;
      padding: 25px;
      border-radius: 15px;
      animation: fadeIn 1s ease;
    }

    @keyframes fadeIn {
      from {opacity: 0;}
      to {opacity: 1;}
    }

    .hidden {
      display: none;
    }

    /* Floating hearts */
    .heart {
      position: absolute;
      color: #4da6ff;
      animation: float 5s linear infinite;
    }

    @keyframes float {
      from {
        transform: translateY(100vh);
        opacity: 1;
      }
      to {
        transform: translateY(-10vh);
        opacity: 0;
      }
    }
  </style>
</head>

<body>

<h1>Hi Baby 💙</h1>
<button onclick="openLetter()">Open My Letter 💌</button>

<div class="letter" id="letter">
  <h2>Happy Monthsary 💙</h2>

  <p>
    1st month with you, but it feels like forever. I've known you since 2024, yet you’ve never changed.
    Thank you for giving me the chance to prove my love for you, and for loving me unconditionally.
    <br><br>
    I'm so happy with everything happening to us—from introducing you to my family and friends, to finally being your girlfriend.
    <br><br>
    I love everything about you—your smile, your scent, your body ;), your mindset. I love you for being you, baby.
    <br><br>
    I promise I’ll wait until we see each other again and until we finally live together.
    I’ll make bawi when we meet again, but for now, this website muna is my gift for you hehe.
    <br><br>
    I miss you so much. Sana talaga ikasal na tayo.
    I'm always here for you kahit 3,000 miles away ka.
    <br><br>
    I love you so much, baby ko!
  </p>

  <br>

  <h3>Do you love me? 😳</h3>
  <button onclick="yesLove()">YES 💙</button>
  <button onclick="moveNo(this)">NO 😝</button>

</div>

<script>
  function openLetter() {
    document.getElementById("letter").style.display = "block";
  }

  function yesLove() {
    alert("I knew it!! I love you more baby 💙💙💙");
  }

  function moveNo(btn) {
    btn.style.position = "absolute";
    btn.style.top = Math.random() * window.innerHeight + "px";
    btn.style.left = Math.random() * window.innerWidth + "px";
  }

  // Floating hearts generator
  setInterval(() => {
    const heart = document.createElement("div");
    heart.classList.add("heart");
    heart.innerHTML = "💙";
    heart.style.left = Math.random() * 100 + "vw";
    heart.style.fontSize = Math.random() * 20 + 10 + "px";

    document.body.appendChild(heart);

    setTimeout(() => {
      heart.remove();
    }, 5000);
  }, 300);
</script>

</body>
</html>
