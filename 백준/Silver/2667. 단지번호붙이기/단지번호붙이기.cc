#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int cnt=0;
int n;

int dx[]={0,0,-1,1};//상하좌우 
int dy[]={1,-1,0,0};//상하좌우 


int arr[25][25];
int visit[25][25]={false};
vector<int> counter;
int c;

void dfs(int x,int y){
	visit[x][y]=true;
	for(int i=0;i<4;i++){//상,하,좌,우 
		int xp = x+dx[i];
		int yp = y+dy[i];
		
		if(xp<0 || yp<0 || xp>=n || yp>=n) continue; 
		if(arr[xp][yp]==1 && visit[xp][yp]==0){
			c++;
			dfs(xp,yp);
		}
	}
}

int main() {
	cin >> n;
	string str;
	for(int i=0;i<n;i++){
		cin >> str;
		for(int j=0;j<n;j++){
			if(str[j] == '1'){
				arr[i][j]=1;
			}else{
				arr[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1 && visit[i][j]==0){
				c=1;
				dfs(i,j);
				counter.push_back(c);
				cnt++; 
			}
		}
	}
	cout << cnt << endl;
	
	sort(counter.begin(),counter.end());
	for(int i=0;i<counter.size();i++){
		cout << counter[i] << endl;
	}
	
	
}