function solution(picture, k) {
    var answer = [];
    
    for(let i=0;i<picture.length;i++){
        let str = picture[i].split("");
        let current = "";
        
        str.map((element) =>{
            current += element.repeat(k);
            
        })
        console.log(current)
        
        for(let j=0;j<k;j++){
            answer.push(current)
        }
    }
    return answer;
}