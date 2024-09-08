/*
1.숫자의 개수 입력받기,숫자n개 입력받기 
1.1숫자n개 받을 때 string로 받기 
2.각 자리수 분할하기 
3.분할한 자리수 모두 더한 후 출력하기 
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string str;
	int sum=0;//자리 수 모두 합한 값 
	
	cin >> n;
	cin >> str;
	
	for(int i=0;i<n;i++){
		sum += int(str[i])-'0';
	}
	cout << sum;	
}