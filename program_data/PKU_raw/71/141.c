/*
 * 3.cpp
 *
 *  Created on: 2010-12-24
 *      Author: 10082
 */
int main(){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int n,i,M=0,N=0;
	cin>>n;
	while(n>0){
		int year,m1,m2,m;
		cin>>year>>m1>>m2;
		M=0;
		N=0;
		if(m1>m2){
			m=m1;
			m1=m2;
			m2=m;
		}
		if(year%400==0||(year%100!=0&&year%4==0)){
			for(i=0;i<m1-1;i++)
				M=M+b[i];
			for(i=0;i<m2-1;i++)
				N=N+b[i];
			if((N-M)%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			for(i=0;i<m1-1;i++)
				M=M+a[i];
			for(i=0;i<m2-1;i++)
				N=N+a[i];
			if((N-M)%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		n--;
	}
}