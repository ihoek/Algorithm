function solution(my_string) {
    var answer = [];
    /*ascii 65 A ~ 90 Z   97a ~ 122z*/
    
    for(let i=0;i<(90-65+1)*2;i++){
        answer[i] = 0;
    }
    
    for(let i=0;i<my_string.length;i++){
        if(my_string[i].charCodeAt(0)>=65 && my_string[i].charCodeAt(0)<=90){
            //대문자 배열 입력
            answer[my_string[i].charCodeAt(0)-65]++;  
        }else {
            answer[my_string[i].charCodeAt(0)-97+26]++;  
        }
    }
    
    
    return answer;
}