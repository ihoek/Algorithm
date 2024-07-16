#include <iostream>
#include <vector>
using namespace std;

int n,m;

void decimal(){
    vector<int> v(n+1,0);
	
	for(int i = 2; i <= n; i++) {
        v[i] = i;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (v[i]) {
            for (int k = i * i; k <= n; k += i) {
                v[k] = 0;
            }
        }
    }
    
    for (int i = m; i <=n; i++) {
        if(v[i]) cout << i << '\n';
    }
}

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> m >> n;
	
	decimal();
	
}