function solution(arr) {
    var answer = [];
    let x=0;
    let arr_len = arr.length;
    while(true){
        if(arr_len <= Math.pow(2,x)){//길이가 2의 거듭제곱인 경우
            break;
        }else{
            x++;
        }
    }
    //console.log("x",x);
    for(let i=0;i<Math.pow(2,x)-arr_len;i++){
        arr.push(0);
    }
    answer = arr;

    
    return answer;
}