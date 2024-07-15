#include <iostream>
using namespace std;

int n,num;
int cnt=0;


void decimal(int number){
	int i=1;
	int judgment=0;
	
	if(number>1){
		while(i<=number){
			if(number%i==0){
				judgment++;
			}
			i++;
		}	
	}else{
		judgment=0;
	}
	
	if(judgment<3 && number != 1){
		cnt++;
	}
	
}

int main(){
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		decimal(num);
	}
	

	cout << cnt;
}