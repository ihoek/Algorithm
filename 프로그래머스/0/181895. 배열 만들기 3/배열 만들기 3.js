function solution(arr, intervals) {
    var answer = [];
    
    for(let i=0;i<intervals.length;i++){
        let one = intervals[i][0];
        let two = intervals[i][1];
        
        for (let e of arr.slice(one,two+1)) {
          answer.push(e);
        }
    }
    
    
    return answer;
}