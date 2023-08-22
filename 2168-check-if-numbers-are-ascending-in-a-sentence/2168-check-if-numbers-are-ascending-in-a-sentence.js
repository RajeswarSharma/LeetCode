/**
 * @param {string} s
 * @return {boolean}
 */
var areNumbersAscending = function(s) {
    const values = s.split(" ");
    let max = Number.MIN_VALUE;
    for(const value of values){
        let num = parseInt(value)
        if(!isNaN(num)){
            if(num<=max) return false;
            max = num;
        }
    }
    return true;
};