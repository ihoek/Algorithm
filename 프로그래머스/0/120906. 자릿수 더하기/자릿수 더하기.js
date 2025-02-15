function solution(n) {
    var answer = 0;
    let str = n.toString();
    
    for(let i in str){
        answer += parseInt(str[i]);
    }
    
    return answer;
}