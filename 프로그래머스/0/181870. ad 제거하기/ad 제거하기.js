function solution(strArr) {
    var answer = [];
    
    for(let i in strArr){
        if(strArr[i].includes("ad") === true){
            continue;
        }else{
            answer.push(strArr[i]);
        }
    }
    
    return answer;
}