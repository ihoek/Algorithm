function solution(s) {
    var answer = 0;
    let arr = s.split(" ");
    let sum_arr = [];
    
    for(let i=0;i<arr.length;i++){
        if(arr[i] === 'Z'){
         sum_arr.pop();   
        }else{
            sum_arr.push(parseInt(arr[i]));
        }
    }
    
    for(let i=0;i<sum_arr.length;i++){
        answer += sum_arr[i];
    }
    
    
    return answer;
}