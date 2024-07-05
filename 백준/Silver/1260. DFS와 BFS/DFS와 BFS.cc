#include <iostream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <vector>
using namespace std;

int n,m,v;//n 정점의 개수  m 간선의 개수 v 탐색 시작 정점 번호 

int arr[1001][1001];
int visit[1001]={false};

void dfs(int start){
	visit[start]=true;
	cout << start << " ";
	
	for(int i=1;i<=n;i++){
		if(arr[start][i] == 1 && visit[i]==0){
			dfs(i);
		}
	}
}

void bfs(int start){
	queue<int> q;
	q.push(start);
	visit[start] = true;
	
	while(!q.empty()){
		int x = q.front();
		cout << x << " ";
		q.pop();
		
		for(int i=1;i<=n;i++){
			if(arr[x][i] == 1 && visit[i]==0){
				q.push(i);
				visit[i] = true;
			}
		}
		
	}
	
}

int main() {
	int x,y;
	cin >> n >> m >> v;
	for(int i=1;i<=m;i++){
		cin >> x >> y;
		arr[x][y]=1;
		arr[y][x]=1;
	}
	
	//작은 것 부터 탐색 
	dfs(v);
	cout << endl;
	memset(visit, 0, sizeof(visit));
	bfs(v);
	
}