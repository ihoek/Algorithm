function solution(arr) {
    var answer = 0;
    /*
    각 원소 값이 >=50 && 짝수 -> /2
    각 원소 값이 <=50 && 홀수 -> *2+1
    이 과정을 x번 반복한 결과 arr(x)->arr(x) = arr(x+1)인 x중 가장 작은값 retrun 
    */
    let cnt = 0;
    while(true){
        let new_arr = arr.map((element) => {
        if(element >=50 && element%2===0){
            return element/2;
        }else if(element<=50 && element%2===1){
            return element*2+1;
        }else{
            return element;
        }
    });
        let check_arr = arr.every((ele,index) => ele === new_arr[index]); 
        if(check_arr) break;
        cnt++;
        arr = new_arr;
    }
    answer = cnt;
    return answer;
}