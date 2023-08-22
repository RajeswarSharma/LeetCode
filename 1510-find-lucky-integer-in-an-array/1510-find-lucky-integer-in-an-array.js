/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function(arr) {
  let aux = {};
  let result = -1
  for(const value of arr){
      if(!aux[value])
        aux[value] = 1;
      else aux[value]++;
  }  
  for(value of arr){
      if(aux[value] == value && result<value )
        result = value;
  }
  return result;
};