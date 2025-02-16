function solution(arr, flag) {
    var answer = [];
    
    for(let i in arr){
        if(flag[i] === true){//true인 경우 - arr[i] *2
            for(let j=0;j<arr[i]*2;j++){
                answer.push(arr[i]);
            }
        }else{//false인 경우 - arr[i]개 만큼 빼기
            for(let j=0;j<arr[i];j++){
                answer.pop();
            }
        } 
        //console.log("answer",answer);
    }
       
    
    
    return answer;
}