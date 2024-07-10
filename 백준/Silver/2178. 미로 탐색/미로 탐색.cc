#include <iostream>
#include<queue>
using namespace std;

int n,m;

int dx[]={-1,1,0,0};//상하좌우 
int dy[]={0,0,-1,1};//상하좌우 

int visit[101][101];
int arr[101][101];
int dist[101][101];
queue<pair<int,int>> q;


void bfs(int start_x, int start_y) {
    visit[start_x][start_y]=1;
    q.push(make_pair(start_x,start_y));
    dist[start_x][start_y]++;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i=0;i<4;++i){//상,하,좌,우 
			int xp = x+dx[i];
			int yp = y+dy[i];
		
			if((xp>=0 && xp<n) && (yp>=0 && yp<m) 
				&& !visit[xp][yp] && arr[xp][yp]== 1){
				visit[xp][yp]=1;
				q.push(make_pair(xp,yp));
				dist[xp][yp]  = dist[x][y]+1;
			}
		}	
	}
    
}

int main() {
	
	cin >> n >> m;
	
	
	for(int i=0;i<n;++i){
		string str;
		cin >> str;
		for(int j=0;j<m;++j){
			arr[i][j] = str[j]-'0';
		}
	}
	
	bfs(0,0);

	cout << dist[n-1][m-1] << endl;
	

}