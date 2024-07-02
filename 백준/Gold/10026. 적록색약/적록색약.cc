#include <iostream>
#include <string.h>
using namespace std;

int n;
int c=0;
int dx[]={0,0,-1,1};//상하좌우 
int dy[]={1,-1,0,0};//상하좌우 

int visit[101][101];
char arr[101][101];

void dfs(int x,int y){
	visit[x][y]=true;
	for(int i=0;i<4;i++){//상,하,좌,우 
		int xp = x+dx[i];
		int yp = y+dy[i];
		
		if(xp<0 || yp<0 || xp>=n || yp>=n) continue; 
		//범위에 들어간다면 
		if(arr[xp][yp]== arr[x][y] && !visit[xp][yp]){
			dfs(xp,yp);
		}
	}
}

int main() {
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	
	//적록색약이 아닌 경우
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!visit[i][j]){
				dfs(i,j);
				c++; 
			}
		}
	}
	cout << c << " ";
	c=0;
	memset(visit,false, sizeof(visit));
	
	//r -> g
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j] == 'R'){
				arr[i][j] = 'G';
			}
		}
	}
	
	
	//적록색약인 경우의 수 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!visit[i][j]){
				dfs(i,j);
				c++; 
			}
		}
	}
	cout << c;
}