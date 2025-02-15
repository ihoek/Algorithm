function solution(num, k) {
    var answer = 0;
    let str = num.toString();
    
    for(let i in str){
        if(parseInt(str[i]) === k){
            answer = parseInt(i)+1;
            break;
        }
    }
    if(answer === 0){
        answer = -1;
    }
    
    
    return answer;
}