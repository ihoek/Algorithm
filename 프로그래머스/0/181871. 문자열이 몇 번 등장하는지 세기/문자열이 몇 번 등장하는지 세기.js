function solution(myString, pat) {
    var answer = 0;
    const set = new Set();
    for(let i=0;i<myString.length;i++){
        //console.log("i:",i,", ",myString.indexOf(pat,i));
        if(myString.indexOf(pat,i) !== -1){
            let count = myString.indexOf(pat,i);
            //값이 있을 경우
            set.add(count);
        }
        
    }
    answer = set.size;
    return answer;
}