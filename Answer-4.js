function createArrayofFunctions(y) {
     var   arr = [];
     for(let i=0;i<y;i++){
         arr[i] = function(x) {return x+i;}
     }
     return arr;
}