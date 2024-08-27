#include <iostream>
using namespace std;

int main() {

	int arr[3][4];
	int judge[3];
	int cnt_0=0;
	int cnt_1=0;
	
	for(int i=0;i<3;i++) {
		for(int j=0;j<4;j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		cnt_0=0;
		cnt_1=0;
		for(int j=0;j<4;j++){
			
			if(arr[i][j] == 1){
				cnt_1++;
			}else if(arr[i][j] == 0){
				cnt_0++;
			}
			
		}
		//배 0 등 1
		if(cnt_0 == 1 && cnt_1 ==3){
			judge[i]='A';
		}else if(cnt_0 == 2 && cnt_1 ==2){
			judge[i]='B';
		}else if(cnt_0 == 3 && cnt_1 ==1){
			judge[i]='C';
		}else if(cnt_0 == 4 && cnt_1 ==0){
			judge[i]='D';
		}else if(cnt_0 == 0 && cnt_1 ==4){
			judge[i]='E';
		}
	}
	
	
	
	
	for(int i=0;i<3;i++) {
		cout << char(judge[i]) << endl;
	}

}