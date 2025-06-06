function solution(spell, dic) {
    var answer = 0;
    //spell을 모두 사용해 조합 후 나올 수 있는지?
    
    /*
    1.dic[i]를 split로 분해 후 spell를 확인 모두 true인 경우에만 result => 1
    else result =>2
    */
    
    dic.map((element) => {
        
        if(answer === 1) return;
        let cnt = 0;
        //console.log("element",element)
        spell.map((item) =>{
            //element.includes(item);
            if(element.includes(item)){
               cnt++;
            }
            console.log("cnt",cnt);
            
           
        })
        
          if(cnt === spell.length && element.length === cnt){
                answer = 1;
                return;
                }else{
                    answer = 2;
                }
              //console.log("answer",answer)
    })
    
     //console.log("total",answer)
    return answer;
}