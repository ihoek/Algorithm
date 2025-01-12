function solution(binomial) {
    var answer = 0;
    let arr = [];
    arr = binomial.split(" ");
    if(arr[1] === "+"){
        answer = parseInt(arr[0])+parseInt(arr[2])
    }else if(arr[1] === "-"){
        answer = parseInt(arr[0])-parseInt(arr[2])
    } if(arr[1] === "*"){
        answer = parseInt(arr[0])*parseInt(arr[2])
    }
    //console.log(arr);
    return answer;
}