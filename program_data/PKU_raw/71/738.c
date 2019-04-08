/*
 * 1.cpp
 *
 *  Created on: 2012-11-2
 *      Author: 99003
 */

int luna(int year)
{
	if (year%400==0) return 1;
	if(year%100==0) return 0;
	if(year%4==0) return 1;
	else return 0;}
int main(){
	int year,month1,month2,day;
	int n;
	int mon[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(;n>=1;n--){
		day=0;
		cin>>year>>month1>>month2;
		mon[2]=mon[2]+luna(year);
		if(month1-month2>0)
		{
			for(;month2<month1;month2++)
			{
				day=day+mon[month2];
			}
		}
		if(month1-month2<0)
				{
					for(;month1<month2;month1++)
					{
						day=day+mon[month1];
					}
				}
		if(day%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		mon[2]=28;
	}
	return 0;
}
