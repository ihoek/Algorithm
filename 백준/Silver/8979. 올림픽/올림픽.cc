#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,k;
	int g[1001];
	int s[1001];
	int b[1001];
	int temp;
	int cnt=1;
	
	cin >> n >> k;
	
	//input part
	for(int i=1;i<=n;i++){
		cin >> temp;
		cin >> g[temp] >> s[temp] >> b[temp];
	}
	
	for(int i=1;i<=n;i++){
		if(g[i] > g[k]){
			cnt++;
		}else if(g[i] == g[k]){
			if(s[i] > s[k]){
				cnt++;
			}else if(s[i] == s[k]){
				if(b[i] > b[k]){
					cnt++;
				}
			}
		}
	}
	cout << cnt;
	 

}
