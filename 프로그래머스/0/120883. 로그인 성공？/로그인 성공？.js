function solution(id_pw, db) {
    var answer = '';
    
    /*
    1.모두 일치 login
    2.로그인 실패 - 아이디 일치x fail
    2.1 아이디 일치o 비밀버호 일치x wrong pw
    */
    
    for(let i in db){
        if(db[i][0] === id_pw[0] && db[i][1] === id_pw[1]){
            //아이디 비밀번호 모두 일치하는 경우
             answer = "login";
        }else if(db[i][0] === id_pw[0] && db[i][1] !== id_pw[1]){
             answer =  "wrong pw";
            break;
        }else if(db[i][0] !== id_pw[0]){
             answer =  "fail";
        }
    }
    
    
    return answer;
}