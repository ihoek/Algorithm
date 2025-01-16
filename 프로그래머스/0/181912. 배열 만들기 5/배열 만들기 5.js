function solution(intStrs, k, s, l) {
    var answer = [];
    for(let i=0;i<intStrs.length;i++){
        let com_n = intStrs[i].slice(s,s+l);
        if(com_n>k){
            answer.push(parseInt(com_n));
        }
        //console.log(intStrs[i].slice(s,s+l+1));
    }
    
    
    return answer;
}