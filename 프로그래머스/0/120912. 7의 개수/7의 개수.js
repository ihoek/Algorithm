function solution(array) {
    var answer = 0;
    
    for(let i in array){
        let str_arr = array[i].toString();
        for(let j in str_arr){
            if(str_arr[j] === "7"){
                answer++;
            }
        }
    }
    
    return answer;
}