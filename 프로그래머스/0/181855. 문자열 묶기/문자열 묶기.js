function solution(strArr) {
    var answer = 0;
    let arr = strArr.map((element)=> element.length);
    let result = {};
    
    arr.forEach((item) => {
        result[item] = (result[item] || 0)+1;
    });
    answer = Math.max(...Object.values(result));
 
    return answer;
}