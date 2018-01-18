var a = ['A','B','C','D','E'];
    var b = ['A','E','B'];
    function fun(a_arr,b_arr){
      var c = 0;
      for(var i=0;i<b.length;i++){
        for(var y=0;y<a.length;y++){
          if(a[y] == b[i]){
            c++;
          }
        }
      }
      if(c == b.length){
        return true;
      }else{
        return false;
      }
}
    fun(a,b)