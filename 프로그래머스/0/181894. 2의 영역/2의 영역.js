function solution(arr) {
    var answer = [];
    let two_arr = [];
    
    //arr배열 속 2 찾기
    for (let i in arr) {
        if(arr[i] === 2){
            two_arr.push(i);
        }
    }
    
    //2 위치에 따른 배열 값 반환
    let start = two_arr[0];
    let last = two_arr[two_arr.length-1];
    
    console.log(start, last);
    
    if(typeof start == "undefined" && typeof last == "undefined"){//2가 없는 경우
        answer.push(-1);
    }else if(start === last){//시작 값과 끝 값이 같은 경우 => 2가 하나만 있는 경우
        answer.push(arr[two_arr[0]]);
    }else if(two_arr.length>=2){//시작 값과 끝 값이 존재할 경우
        answer = arr.slice(start, Number(last)+1);   
    }
    
    return answer;
}