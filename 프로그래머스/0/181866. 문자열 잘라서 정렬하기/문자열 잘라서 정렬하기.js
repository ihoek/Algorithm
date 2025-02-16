function solution(myString) {
    var answer = [];
    let sub_x = myString.split("x");
    let sub_x_trim = [];
    for(let i in sub_x){
        if(sub_x[i] !== ""){
            sub_x_trim.push(sub_x[i]);
        }
    }
    //console.log(sub_x_trim)
    answer = sub_x_trim.sort();
    return answer;
}