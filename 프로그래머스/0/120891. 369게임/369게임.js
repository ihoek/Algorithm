function solution(order) {
    var answer = 0;
    let str = order.toString();
    
    for(let i in str){
        if(str[i] === "3" || str[i] === "6" || str[i] === "9"){
            answer++;
        }
    }
    
    return answer;
}