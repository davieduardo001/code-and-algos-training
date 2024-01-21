/////////////////////////////
// 
// this function verify
// a string of words, if
// a word have more than
// five chars it'll change the order of that
// 
/////////////////////////////

function spinWords(str) {
    //TODO Have fun :)

    // split the string into a array
    let array = str.split(" ");

    // loop over the whole array
    for (let i = 0; i < array.length; i++) {
        
        sizeOfTheWord = array[i].length;
        //verify if the current word have 5 or more letters
        if (sizeOfTheWord >= 5) {

            let finalString = [], currentString = array[i].split(""); //just use reverse here

            let count = 0;
            
            /////////////////////////////
            //
            // take each char of the current string, put in a "final string"
            // then join and send it to the original array
            //
            /////////////////////////////

            for (let x = sizeOfTheWord; x >= 0; x--) {
                finalString[count] = currentString[x];
                count++;
            }

            finalString = finalString.join("");

            // send back the word to the start string
            array[i] = finalString;
        }
    }

    return array.join(" ");
}

console.log(spinWords("Stop Spinning My Words!"));