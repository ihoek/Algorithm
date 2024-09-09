#include <iostream>
#include<string>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	int res =a*b*c;
	string str_res=to_string(res);
	int arr[10]={0};
	
	for(int i=0;i<str_res.length();i++){
		for(int j=0;j<10;j++){
			if(str_res[i]-'0'==j){
				arr[j]++;
			}else{
				continue;
			}
		}
	}
	
	for(int i=0;i<10;i++){
		cout << arr[i] << endl;
	}
	
}