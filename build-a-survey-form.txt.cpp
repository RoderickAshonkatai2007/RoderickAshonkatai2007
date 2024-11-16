<!DOCTYPE html>
<html lang="en">
  <header>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="styles.css" />
    <title>freeCodeCamp Survey Form</title>
  </header>
  <body>
    <h1 id="title">freeCodeCamp Survey Form</h1>
    <p id="description" class="established">Thank you for taking the time to help us improve the platform</p>
    <form id="survey-form" action='https://survey-form.freecodecamp.rocks/?name=Jan&email=jan.mlinaric%40gmail.com&age=22&role=student&user-recommend=definitely&mostLike=challenges&prefer=back-end-projects&comment=a'>
      <fieldset>
        <label id="name-label">Name<input id="name" type="text" placeholder="Enter your name" required /></label>
        <label id="email-label">Email<input id="email" type="email" placeholder="Enter your Email" required /></label>
        <label id="number-label">Age <small>(optional)</small> <input id="number" type="number" min="10" max="99" placeholder="Age" /  ></label>
        <label> Which option best describes your current role
          <select id="dropdown">
            <option value="">Select current role</option>
            <option value="1">Student</option>
            <option value="2">Full Time Job</option>
            <option value="3">Full Time Learner</option>
            <option value="4">Prefer not to say</option>
            <option value="5">Other</option>
          </select>
        </label>
      </fieldset>
      <fieldset>
        <label> Would you recommend freeCodeCamp to a friend?</label>
          <label><input type="radio" class="inline" name="attribute" value="1" checked /> Definitely</label>
          <label><input type="radio" class="inline" name="attribute" value="2" /> Maybe</label>
          <label><input type="radio" class="inline" name="attribute" value="3" /> Not sure</label>
      </fieldset>
      <fieldset>
        <label> What is your favorite feature of freeCodeCamp?
          <select id="dropdown2">
            <option value="">Select an option</option>
            <option value="1">Challenges</option>
            <option value="2">Projects</option>
            <option value="3">Community</option>
            <option value="4">Open Source</option>
          </select>
        </label>
      </fieldset>
      <fieldset>
        <label>What would you like to see improved? <small>(Check all that apply)</small> </label>
        <label><input type="checkbox" class="inline" value="front-end-projects" /> Front-end Projects</label>
        <label><input type="checkbox" class="inline" value="back-end-projects" /> Back-end Projects</label>
        <label><input type="checkbox" class="inline" value="data-visualization" /> Data visualization</label>
        <label><input type="checkbox" class="inline" value="challenges" /> Challenges</label>
        <label><input type="checkbox" class="inline" value="open-source-community" /> Open Source Community</label>
        <label><input type="checkbox" class="inline" value="gitter-help-rooms" /> Gitter help rooms</label>
        <label><input type="checkbox" class="inline" value="videos" /> Videos</label>
        <label><input type="checkbox" class="inline" value="city-meetups" /> City Meetups</label>
        <label><input type="checkbox" class="inline" value="wiki" /> Wiki</label>
        <label><input type="checkbox" class="inline" value="forum" /> Forum</label>
        <label><input type="checkbox" class="inline" value="additional-courses" /> Additional Courses</label>
      </fieldset>
      <fieldset>
        <label> Any comments or suggestions?
          <textarea rows="5" cols="50" placeholder="Enter your comment here..."></textarea>
        </label>
      </fieldset>
      <fieldset>
        <input type="submit" value="Submit" id="submit" />
      </fieldset>
    </form>
  </body>
</html>
 
    

** end of undefined **

** start of undefined **



body {
  background-image: url(https://media.nationalgeographic.org/assets/photos/957/798/480e8645-fc3f-48dc-b17a-e81038d3ee97_c158-0-1842-1333_r800x633.jpg?eff12d8bcc1b3653b5f5a0c5ed1619838922d9af);
  background-repeat: no-repeat;
  background-size: 100% 100%;
  background-attachment: fixed;
  color: rgb(245, 255, 250);
  font-family: Perpetua;
  font-size: 24px;
}

h1, p {
  text-align: center;
}

h1 {
  margin-top: 2rem;
  margin-bottom: 0;
}

p {
  margin-top: 0;
  margin-bottom: 2rem;
}

.established {
  font-style: italic;
}

form {
  background-color: rgba(45, 0, 100, 0.9);
  color: rgb(245, 255, 250);
  border-radius: 5px;
  box-shadow: 0 0 10px rgb(255, 215, 0);
  width: 60vw;
  max-width: 700px;
  min-width: 350px;
  margin: 0 auto;
  padding: 15px 15px 25px 15px;
}

label {
  display: block;
}

fieldset {
  border: none;
}

input,
select,
textarea {
  width: 100%;
  margin: 0.1em 0 1em 0;
  min-height: 2em;
  font-size: 0.67em;
}

input,
select {
  border-radius: 5px;
}

textarea {
  min-height: 6.33em;
  resize: vertical;
}

input[type="submit"] {
  background-color: rgb(139, 0, 139);
  border-color: rgb(255, 215, 0);
  color: rgb(245, 255, 250);
  font-size: 1.33rem;
  min-height: 2.5em;
}

input[type="submit"]:hover {
  outline: none !important;
  border: 2px solid rgb(0, 255, 255);
  box-shadow: 0 0 10px rgb(0, 127, 127);
  cursor: pointer;
}

input[type="text"]:focus,
input[type="email"]:focus,
input[type="number"]:focus,
select:focus {
  outline: none !important;
  box-shadow: 0 0 7px rgb(0, 255, 255);
}

.inline {
  width: unset;
  margin: 0 0.5em 0 0;
  min-height: unset;
  vertical-align: middle;
}
 


** end of undefined **

