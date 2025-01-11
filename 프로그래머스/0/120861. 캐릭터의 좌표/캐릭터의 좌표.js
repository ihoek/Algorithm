function solution(keyinput, board) {
    var answer = [0,0];
    
    // [좌우, 상하]
    
    for(let i=0;i<keyinput.length;i++){
        
        switch (keyinput[i]) {
            case "left" :
                answer[0] += -1; 
                if(answer[0] <= parseInt((board[0]/2)*-1)){
                    answer[0] = parseInt((board[0]/2)*-1);
                }
                break;
            case "right" : 
                answer[0] += 1;
                if(answer[0] >= parseInt(board[0]/2)){
                    answer[0] = parseInt(board[0]/2);
                }
                break;
            case "up" :
                answer[1] += 1;
                if(answer[1] >= parseInt(board[1]/2)){
                    answer[1] = parseInt(board[1]/2);
                }
                break;
            case "down" :
                answer[1] += -1;
                if(answer[1] <= parseInt((board[1]/2)*-1)){
                    answer[1] = parseInt((board[1]/2)*-1);
                }
                break;
        }
        
            
    }
    
    return answer;
}