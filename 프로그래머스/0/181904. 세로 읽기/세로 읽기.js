function solution(my_string, m, c) {
    var answer = '';
    /*
    ihrh 1 2=c
    bakr 5 6
    fpnd 9 10
    oplj
    hygc
    */
    
    for(let i=0;i<my_string.length;i++){
        if(i === c-1){
            answer += my_string[i];
            c += m;
        }
    }
    return answer;
}