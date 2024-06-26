#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	int c=1;
	int em=0;
	
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			em++;
			if(i==0 || i==str.length()-1){
				continue;
			}
			c++;
		}
		
	}
	if(em==str.length()){
		c=0;
	}
	
	cout << c;
}