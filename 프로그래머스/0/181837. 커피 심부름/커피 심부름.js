function solution(order) {
    var answer = 0;
    
    order.map((element)=>{
        if(element.includes("americano") || element === 'anything'){
            answer += 4500;
        }else if(element.includes("cafelatte")){
            answer += 5000;
        }
    })
    
    return answer;
}