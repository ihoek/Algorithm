#include <iostream>
#include <queue>
using namespace std;

struct tomato{
    int y,x;
};

int m,n;
int arr[1001][1001];

int dx[]={0,0,-1,1};//상하좌우 
int dy[]={1,-1,0,0};//상하좌우 

queue<tomato> q;


bool is_inside(int yp, int xp){
    return (xp>=0 && yp>=0 && xp<m && yp<n);
}


void bfs(void) {
    	
    while (!q.empty()) {
    	int y = q.front().y;
        int x = q.front().x;
        q.pop();
    	
    for(int i=0;i<4;i++){//상,하,좌,우 
		int xp = x+dx[i];
		int yp = y+dy[i];
		
		if(xp<0 || yp<0 || xp>=m || yp>=n) continue; 
		if(is_inside(yp,xp) && arr[yp][xp]== 0){
			arr[yp][xp] = arr[y][x]+1;
			q.push({yp,xp});
		}
	}	
	
	}
    
}

int main() {	
	cin >> m >> n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){
				q.push({i,j});
			}
		}
	}

	bfs();
	int max=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == 0){
				cout << -1;
				return 0;
			}
			if(max < arr[i][j]) max = arr[i][j];
		}
	}
	cout << max-1;
}