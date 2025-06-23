function solution(rank, attendance) {
    var answer = 0;
    let total =[];
    
    attendance.map((element,index)=>{
        if(element) total.push({index : index, rank : rank[index]});
     
    })
    
    total.sort((a, b) => a.rank - b.rank)
    //console.log(total.slice(0,3))
    answer = 10000 * total[0].index + 100 * total[1].index + total[2].index;
    
    return answer;
}