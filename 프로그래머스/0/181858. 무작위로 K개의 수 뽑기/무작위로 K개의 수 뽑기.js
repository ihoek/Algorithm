function solution(arr, k) {
    var answer = [];
    
    arr.map((element) => {
        if(answer.includes(element) === false && answer.length < k){//값이 없다면
          answer.push(element);
        }
    });
    
    if(answer.length <= k){
        for(let i=answer.length;i<k;i++){
            answer.push(-1);
        }
    }
    console.log(answer);
    
    
    return answer;
}