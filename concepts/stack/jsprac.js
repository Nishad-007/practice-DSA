function isLeap(year) {
    if (year%4==0) {
        if (year%100==0) {
           if(year%400==0){
               return "leap year";
           }else{
               return "not a leap year";
           }
        }else{
            return "leap year";
        }
    }else{
        return "not leap year";
    }     
}