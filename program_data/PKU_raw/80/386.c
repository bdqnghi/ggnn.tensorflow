/*
 * qimokaoshi_3.cpp
 *??:???????????
 *  Created on: 2011-1-9
 *      Author: jsgl
 */

int year1,year2,month1,month2,day1,day2,d1,d2=0,i;
int a[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int ntianshu(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
       return 366;
    return 365;
}
int tianshu(int y,int m,int d)
{
	if(ntianshu(y)==366)  a[2]=29;
	else a[2]=28;
	int day=0;
	for(int i=1;i<=m-1;i++)
		day=day+a[i];
	return day+d;
}
int main()
{
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	d1=tianshu(year1,month1,day1);
	for(i=year1;i<=year2-1;i++)
		d2=d2+ntianshu(i);
	d2=d2+tianshu(year2,month2,day2);
	cout<<d2-d1;
return 0;
}
