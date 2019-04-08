/*
 * final2.cpp
 *
 *  Created on: 2013-1-12
 *      Author: wangyinzhi
 */

int main(){
	char a[1001];
	cin>>a;
	int l=strlen(a);
	int number=1;
	a[l]='2';
	for(int i=0;i<l;i++){
		if(a[i+1]==a[i]||a[i+1]-a[i]=='A'-'a'||a[i]-a[i+1]=='A'-'a'){
			number++;
		}
		else {
			if(a[i]>=97) a[i]=a[i]-32;
			cout<<"("<<a[i]<<","<<number<<")";
			number=1;
		}
	}
	return 0;
}
