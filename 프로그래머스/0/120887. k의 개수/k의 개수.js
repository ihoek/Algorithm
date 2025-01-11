function solution(i, j, k) {
    var answer = 0;
    
    for(let n=i;n<=j;n++){
        let list = [];
        list = n.toString().split("");
        for(let t=0;t<list.length;t++){
            if(parseInt(list[t]) === k){
                answer++;
            }
        }
    }
    return answer;
}