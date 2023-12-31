<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Firebase Authentication</title>
  <!-- Include Firebase SDK -->
  <script src="https://www.gstatic.com/firebasejs/9.0.1/firebase-app.js"></script>
  <script src="https://www.gstatic.com/firebasejs/9.0.1/firebase-auth.js"></script>
</head>
<body>

  <div id="login-container">
    <h2>Login</h2>
    <label for="email">Email:</label>
    <input type="email" id="email" placeholder="Enter your email">
    <label for="password">Password:</label>
    <input type="password" id="password" placeholder="Enter your password">
    <button onclick="login()">Login</button>
  </div>

  <div id="signup-container">
    <h2>Sign Up</h2>
    <label for="signup-email">Email:</label>
    <input type="email" id="signup-email" placeholder="Enter your email">
    <label for="signup-password">Password:</label>
    <input type="password" id="signup-password" placeholder="Enter your password">
    <button onclick="signup()">Sign Up</button>
  </div>

  <script>
   // For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyAJU3Lc22WyRiJ_Wl_z60wrBlJF4AVpYm0",
  authDomain: "vibeplay-69631.firebaseapp.com",
  databaseURL: "https://vibeplay-69631-default-rtdb.firebaseio.com",
  projectId: "vibeplay-69631",
  storageBucket: "vibeplay-69631.appspot.com",
  messagingSenderId: "106711042271",
  appId: "1:106711042271:web:4b76bbed14931ca71b816a",
  measurementId: "G-R045ML9M8V"
};
    
    firebase.initializeApp(firebaseConfig);

    // Function to handle login
    function login() {
      const email = document.getElementById('email').value;
      const password = document.getElementById('password').value;

      firebase.auth().signInWithEmailAndPassword(email, password)
        .then((userCredential) => {
          // Handle successful login
          const user = userCredential.user;
          console.log('Logged in:', user);
        })
        .catch((error) => {
          // Handle errors
          const errorCode = error.code;
          const errorMessage = error.message;
          console.error('Login error:', errorCode, errorMessage);
        });
    }

    // Function to handle sign up
    function signup() {
      const email = document.getElementById('signup-email').value;
      const password = document.getElementById('signup-password').value;

      firebase.auth().createUserWithEmailAndPassword(email, password)
        .then((userCredential) => {
          // Handle successful sign up
          const user = userCredential.user;
          console.log('Signed up:', user);
        })
        .catch((error) => {
          // Handle errors
          const errorCode = error.code;
          const errorMessage = error.message;
          console.error('Sign up error:', errorCode, errorMessage);
        });
    }
  </script>
<!-- Add this at the bottom of your body section -->
<script src="https://www.gstatic.com/firebasejs/9.0.1/firebase-app.js"></script>
<script src="https://www.gstatic.com/firebasejs/9.0.1/firebase-auth.js"></script>

<script>
  // Your Firebase config object
  const firebaseConfig = {
    apiKey: "AIzaSyAJU3Lc22WyRiJ_Wl_z60wrBlJF4AVpYm0",
    authDomain: "vibeplay-69631.firebaseapp.com",
    databaseURL: "https://vibeplay-69631-default-rtdb.firebaseio.com",
    projectId: "vibeplay-69631",
    storageBucket: "vibeplay-69631.appspot.com",
    messagingSenderId: "106711042271",
    appId: "1:106711042271:web:4b76bbed14931ca71b816a",
    measurementId: "G-R045ML9M8V"
  };

  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);
</script>
</body>
</html>
