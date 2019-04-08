/*
 * shulie.cpp
 *
 *  Created on: 2012-10-17
 *      Author: Justin
 */

int main(){
	int n,m;
	int a1,a2;
	cin>>n;
	a1=a2=1;
	while(n>0){
		cin>>m;
		while(m>2){ //?????????M??m??2???1
			a2=a2+a1;
			a1=a2-a1;
			m=m-1;
		}
		cout<<a2<<endl;
		n=n-1;
		a1=1;//?????
		a2=1;
	}
	return 0;
}