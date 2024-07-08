#include <iostream>
#include <queue>
using namespace std;

int n,k;
int visit[100001];
int count = 0;
void bfs(int start) {
    queue<pair<int,int>> q;
    q.push(make_pair(start,count));
    visit[start] = true;
    
    while (!q.empty()) {
        int x = q.front().first;
        int count = q.front().second;
        q.pop();
        
        if(x==k){//시작 위치와 동생 위치가 같은 경우 
        	cout << count;
        	break;
		}
		if(x+1>=0 && x+1<=100000){
			if(!visit[x+1]){
				visit[x+1]=true;
				q.push(make_pair(x+1,count+1));
			}	
		}
		
		if(x-1>=0 && x-1<=100000){	
			if(!visit[x-1]){
				visit[x-1]=true;
				q.push(make_pair(x-1,count+1));
			}
		}
		if(x*2>=0 && x*2<=100000){
			if(!visit[x*2]){
				visit[x*2]=true;
				q.push(make_pair(x*2,count+1));
			}
		}	
	}
    
}

int main() {
	cin >> n >> k;
	
	bfs(n);
	
}