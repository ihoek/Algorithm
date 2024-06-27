#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int arr[8]={0};
	int sarr[8]={0};//sort arr
	int narr[5]={0};//number arr
	int sum=0;
	
	//input arr
	for(int i=0;i<8;i++){
		cin >> arr[i]; 	
		sarr[i] = arr[i];
	}
	
	//sort
	sort(sarr,sarr+8,greater<int>());
	
	//sum
	for(int i=0;i<5;i++){
		sum += sarr[i];
	}
	cout << sum << endl;
	
	//narr
	for(int i=0;i<5;i++){
		for(int j=0;j<8;j++){
			if(sarr[i]==arr[j]){
				narr[i] = j+1;
			}
		}
		
	}
	
	//cout narr
	sort(narr,narr+5);
	for(int i=0;i<5;i++){
		cout << narr[i] << " ";
	}
}