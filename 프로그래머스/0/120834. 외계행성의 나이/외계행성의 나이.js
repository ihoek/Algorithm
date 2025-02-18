function solution(age) {
    var answer = '';
    let str_num = age.toString();
    for(let i=0;i<str_num.length;i++){
        answer += String.fromCharCode(Number(str_num[i])+97);
    }
    
    return answer;
}