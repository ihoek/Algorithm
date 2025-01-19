function solution(arr, query) {
    var answer = [];
    
    for(let i=0;i<query.length;i++){
        if(i%2 === 0){//짝수인 경우
            arr.splice(query[i]+1);
        }else{//홀수인 경우
            arr.splice(0,query[i]);
        }
    }
    answer = arr;
    
    return answer;
}