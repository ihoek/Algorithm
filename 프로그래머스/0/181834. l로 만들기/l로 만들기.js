function solution(myString) {
    var answer = '';
    
    myString.split("").map((element)=>{
        if(element < "l"){
            answer+="l";
        }else{
            answer+=element;
        }
    })
    
    return answer;
}