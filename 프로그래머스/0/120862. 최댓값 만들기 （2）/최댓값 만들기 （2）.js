function solution(numbers) {
    var answer = 0;
    let arr = [];
    
    for(let i=0;i<numbers.length;i++){
        numbers.forEach((element,index) => {
            if(i !== index){
                arr.push(numbers[i]*element);
            }
        })
    }
    //console.log(arr)
    answer = Math.max(...arr)
    return answer;
}