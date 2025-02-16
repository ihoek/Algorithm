function solution(my_string) {
    var answer = [];
    let str = my_string.split(" ");
    for(let i in str){
        if(str[i] !== ""){
           answer.push(str[i]);
           }
    }
    return answer;
}