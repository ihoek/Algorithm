function solution(money) {
    var answer = [];
    let num = parseInt(money/5500);
    answer.push(num);
    answer.push(money-5500*num);
    
    return answer;
}