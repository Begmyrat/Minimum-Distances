#include <iostream>

using namespace std;

int n,minD=9999999;
int a[10000];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j] && j-i<minD){
				minD=j-i;
				break;
			}
		}
	}
	if(minD==9999999)
		cout<<"-1"<<endl;
	else	
		cout<<minD<<endl;
	
	return 0;
}
