#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

/*
ascii A -> 65
*/

int main() {
	string str;//문자열 배열 
	int cntstr[26]={0};
	int max=INT_MIN;
	int cnt=0;//중복체크여부 
	char temp;
	
	cin >> str;
	
	//대문자 변환 
	for(int i=0;i<str.size();i++){
		str[i] = toupper(str[i]);
	}
	
	//알파벳 하나씩 count해서 배열에 넣기 
	for(int i=0;i<str.size();i++){
		cntstr[str[i]-65]++;
	}
	
	
	/*for(int i=0;i<26;i++){
		cout << cntstr[i] << " ";
	}*/
	//cout <<endl << "------------------" <<endl;
	
	//최대값 찾기 
	 for (int i : cntstr)
    {
        if (i > max) {
            max = i;
        }
    }
    //cout << max;
    
	for(int i=0;i<26;i++){
		if(cntstr[i]==max){
			temp=i+65;
			cnt++;
		}
	}
    
    if(cnt>=2){
    	cout << "?";
	}else{
		cout << temp;
	}
	
	
}
