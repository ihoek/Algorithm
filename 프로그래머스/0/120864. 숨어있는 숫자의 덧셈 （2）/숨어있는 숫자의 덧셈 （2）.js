function solution(my_string) {
    var answer = 0;
    let regex = /[^0-9]/g;
    
    
    let re_str = my_string.replace(regex," ").split(" ");
    
    //console.log(re_str.split(" "))
    re_str.map((element)=> {
        if(element) answer += Number(element)
    })
    return answer;
}