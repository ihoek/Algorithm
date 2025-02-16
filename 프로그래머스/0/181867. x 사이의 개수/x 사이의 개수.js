function solution(myString) {
    var answer = [];
    let sub_x = myString.split("x");
    for(let i in sub_x){
        answer.push(sub_x[i].length);
    }
    console.log();
    return answer;
}