#include <iostream>
#include <queue>
#include<string.h> 
using namespace std;

int t;
int n;
int start_x,start_y;
int end_x,end_y;

int visit[301][301];
int dist[301][301];
queue<pair<int,int>> q;

int dx[]={1,2,1,2,-1,-2,-1,-2};//x좌표 
int dy[]={2,1,-2,-1,2,1,-2,-1};//y좌표 


void bfs(int a,int b){
	visit[a][b] = true;
	q.push(make_pair(a,b));
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();
		
		if(x==end_x && y==end_y){
			cout << dist[x][y] << endl;
			 while(!q.empty()) {
                q.pop();
            }
            break;

		}
		
		for(int i=0;i<8;i++){
			int xp = x+dx[i];
			int yp = y+dy[i];
			
			if(xp<0 || yp<0 || xp>=n || yp>=n) continue;
			if((xp>=0 && xp<n) && (yp>=0 && yp<n) && !visit[xp][yp]){
				visit[xp][yp]=1;
				q.push(make_pair(xp,yp));
				dist[xp][yp] = dist[x][y]+1;
			}
		}
	}
	
}


int main() {	
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		
		memset(visit, 0, sizeof(visit));
		memset(dist, 0, sizeof(dist));
		
		cin >> start_x >> start_y;
		cin >> end_x >> end_y;	
		
		bfs(start_x,start_y);
		
		
		
	}
}