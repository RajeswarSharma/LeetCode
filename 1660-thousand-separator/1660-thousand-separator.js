/**
 * @param {number} n
 * @return {string}
 */
var thousandSeparator = function (n) {
    if(n<1000) return `${n}`;
    let counter = 0;
    let result = "";
    while (n > 0) {
       
        if (counter > 0 && counter % 3 === 0) {
            result = "."+result;
        }
        let newDigit = n % 10;
        n = parseInt(n/10);
        result = newDigit + result;
        counter++;
    }
    return result;
};