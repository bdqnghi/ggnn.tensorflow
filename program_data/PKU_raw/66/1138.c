/*
 * xingqiji.cpp
 *
 *  Created on: 2010-11-19
 *      Author: Administrator
 */
int main(){
	long long year;
	int month,day,i,num;
	cin>>year>>month>>day;
    long long a,b,c;
    a=(long long)(year-1)/4;
    b=(long long)(year-1)/100;
    c=(long long)(year-1)/400;
    num=a-b+c;
	long long sum;
	sum=(year-1)*365+num;
	int imonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%4==0){
		if(year%100!=0)  imonth[1]=29;
		if(year%400==0)  imonth[1]=29;
	}
	for(i=0;i<month-1;i++){
		sum=sum+imonth[i];
	}
	sum=sum+day;
	long long week;
	week=sum%7;
	switch(week){
	case 0:cout<<"Sun."<<endl; break;
	case 1:cout<<"Mon."<<endl; break;
	case 2:cout<<"Tue."<<endl; break;
	case 3:cout<<"Wed."<<endl; break;
	case 4:cout<<"Thu."<<endl; break;
	case 5:cout<<"Fri."<<endl; break;
	case 6:cout<<"Sat."<<endl; break;
	}
	return 0;
}






