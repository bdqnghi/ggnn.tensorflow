/*
 * exercise37.cpp
 *
 *  Created on: 2013-11-7
 *      Author: st
 */
int main()
{
	int n,i,k,year,month1,month2,days=0;
	cin>>n;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int min,max;
	for(i=1;i<=n;i++)
		{
		 cin>>year>>month1>>month2;
		 if(month1>month2)
		 { max=month1;
		     min=month2;}
		 else
		 { max=month2;
		   min=month1;}
		 if(((year%4==0)&&(year%100!=0))||(year%400==0))
			{
			for(k=min;k<max;k++)
			days+=b[k];
		    if(days%7==0)
			cout<<"YES"<<endl;
		    else
			cout<<"NO"<<endl;
			}
		else
			{
			for(k=min;k<max;k++)
            days+=a[k];
		    if(days%7==0)
		    cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
			}
		 days=0;

		}



}
