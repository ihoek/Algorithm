/*
1.입력받은 수를 자리수 별로 분해하기
1.1 자리수별로 각각 n의 0제곱부터 시작하기 
1.2 숫자인 경우 그냥 계산
1.3 문자인 경우 숫자로 치환 후 계산(A:10~Z:35)
2.해당 수를 모두 더한 후 출력 
*/

#include <iostream>
#include<math.h>
#include <ctype.h>
using namespace std;

int main() {
	string str;
	int b;//진법 수 
	long int sum=0;//10진수 결과 
	int n=0;//제곱할 수  
	cin >> str >> b;
	//1.입력받은 수를 자리수 별로 분해하기
	for(int i=str.length()-1;i>=0;i--){
		//1.2 숫자인 경우 그냥 계산 
		if(isdigit(str[i]) == 0) {
			//1.3 문자인 경우 숫자로 치환 후 계산(A:10~Z:35)
			//1.1 자리수별로 각각 n의 0제곱부터 시작하기 
			sum += (int(str[i])-55)*pow(b,n);
			n++;
		}else{
			//1.1 자리수별로 각각 n의 0제곱부터 시작하기 
			sum += (str[i]-48)*pow(b,n);
			n++;
		}	
	}
	
	//2.해당 수를 모두 더한 후 출력 
	cout << sum;
}