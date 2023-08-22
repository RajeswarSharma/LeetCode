/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var licenseKeyFormatting = function (s, k) {
    s = s.toUpperCase();
    let values = s.split("-").join("");
    values = values.split("");
    let result = "";
    let counter = 0;
    for (let i = values.length - 1; i >= 0; i--) {
        if (counter > 0 && counter % k === 0) {
            result = `-${result}`;
        }
       
        result = values[i] + result;
        counter++;
    }
    return result;
};