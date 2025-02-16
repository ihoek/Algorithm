function solution(myString, pat) {
    var answer = '';
    let n='';
    for(let i=0;i<myString.length;i++){
        let str = myString.indexOf(pat,i);
        if(str>=0){//해당 값을 찾았다면
            //console.log(myString.slice(0,str+pat.length));
            let s = myString.slice(0,str+pat.length);
            if(s.length >= n.length){
                n = s;
            }
        }
    }
    console.log(n)
    answer =n;
    
    return answer;
}