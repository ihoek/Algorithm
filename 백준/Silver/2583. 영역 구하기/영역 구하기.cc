#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int m,n,k;//m은 y축, n은 x축 
int dx[]={0,0,-1,1};//상하좌우 
int dy[]={1,-1,0,0};//상하좌우 

int c=0;//분리되어 나누어지는 영역의 개수

int visit[101][101];
vector<int> arr;
queue<pair<int, int>> q;

void bfs(int x1,int y1){
    q.push(make_pair(x1, y1));
    visit[x1][y1] = true;
    
	int cnt = 1;//빈 공간의 개수 
	
	while(!q.empty()){
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		
		for(int i=0;i<4;i++){
			int p_x = x + dx[i];
			int p_y = y + dy[i];
			
			if(p_x < n && p_x >=0 && p_y < m && p_y >=0){//해당 값이 (n,m) 내에 있을 경우 
				if(!visit[p_y][p_x]){//해당 좌표를 가지 않았을 경우 
					q.push(make_pair(p_y, p_x));
					visit[p_y][p_x] = true;
					cnt++;
				}
				
			}
		}
	}
	arr.push_back(cnt);
}

int main() {
	int x1,x2,y1,y2;
	
	
	cin >> m >> n >> k;
	for(int i=0;i<k;i++){
		cin >> x1 >> y1 >> x2 >> y2;
		//좌표 방문처리 
		for(int j=y1;j<y2;j++){
			for(int k=x1;k<x2;k++){
				visit[j][k]=true;
			}
		}
	}
	//m = i y축, n=j x축 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(!visit[i][j]){
				bfs(i,j);
				c++; 
			}
		}
	}
	sort(arr.begin(),arr.end());//오름차순 정렬 
	
	cout << c << endl;
		
	
	for(int i=0;i<arr.size();i++){
		cout << arr[i] << " ";
	}

	

}