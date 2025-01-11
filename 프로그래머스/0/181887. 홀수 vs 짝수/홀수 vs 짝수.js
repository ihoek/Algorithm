function solution(num_list) {
    var answer = 0;
    let even=0;
    let odd=0;
    
    for(let i=0;i<num_list.length;i++){
        if(i%2===0){//짝수. 즉 홀수 원소인 경우
            odd += num_list[i];
        }else{
            even += num_list[i];
        }
    }
    
    odd > even ? answer = odd : answer = even;
    
    return answer;
}