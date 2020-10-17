/**
 * Function to populate values in card from form input
 */
function generateCard() {
    // Get value of Student name from form input 

    const name = document.getElementById('name').value;
    console.log(name)

    // Assign the value of student name to generated card

    document.getElementById('cardName').innerHTML = name;

    // Get value of college name from form input 
    const college = document.getElementById('collegeName').value;

    // Assign the value of college name to generated card

    document.getElementById('cardCollegeName').innerHTML = college

    // Get value of location name from form input 

    const location = document.getElementById('location').value;

    // Assign the value of location name to generated card
    document.getElementById('cardLocation').innerHTML = location;

    // Display final generated card to user     
    document.getElementById("collegeCard").style.display = "block";
}