function solution(num_list) {
    var answer = 0;
    
    for(let i in num_list){
        let n = num_list[i];
        while(n > 1){
            if(n%2 === 0){//even
                n /=2;
                answer++;
            }else{
                n= (n-1)/2;
                answer++;
            }
            
        }
        console.log("answer",answer)
    }
    
    return answer;
}