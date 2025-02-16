function solution(myStr) {
    var answer = [];
    
    let str_sp = myStr.split(/a|b|c/);
    
    for(let i in str_sp){
        if(str_sp[i] !== ""){
            answer.push(str_sp[i]);
        }
    }

    if(answer.length === 0){
        answer.push("EMPTY");
    }
    
    return answer;
}