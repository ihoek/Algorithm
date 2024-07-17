#include <iostream>
using namespace std;

int n;

void factorization(int number){
    for(int i=2;i*i<=number;i++) {
    	while(number%i==0){
    		cout << i <<endl;
    		number/=i;
		}
    }
    if(number>1) cout << number;
}

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> n;
	
	factorization(n);
	
}