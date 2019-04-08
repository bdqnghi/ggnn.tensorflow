/*
 * 1000012889_3.cpp
 *
 *  Created on: 2010-12-24
 *      Author: ???
 *        ??? ???
 */



int main(){
	int n,i,j,year,month1,month2,day1=0,day2=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};       //????????
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};       //????????
	cin>>n;
	for(i=0;i<n;i++,day1=0,day2=0){
		cin>>year>>month1>>month2;
		if(year%4!=0||(year%400!=0&&year%100==0)){           //????
			for(j=1;j<month1;j++)                            //?????????
				day1+=a[j];
			for(j=1;j<month2;j++)                            //?????????
				day2+=a[j];
		}
		else{                                                //????
			for(j=1;j<month1;j++)                            //?????????
				day1+=b[j];
			for(j=1;j<month2;j++)                            //?????????
				day2+=b[j];
		}
		if((day1-day2)%7==0)                                 //????????
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}