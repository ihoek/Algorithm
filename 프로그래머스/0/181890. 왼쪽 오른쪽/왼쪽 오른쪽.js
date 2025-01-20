function solution(str_list) {
    var answer = [];
    
    let index = str_list.findIndex(e => e==="l" || e === "r");
    
    if(index === -1){
        return answer;
    }else if(str_list[index] === "l"){//l이 먼저 나온 경우
        answer = str_list.slice(0,index);
    }else{//r이 먼저 나온 경우
        answer = str_list.slice(index+1);
    }
    
    return answer;
}