/*
 * distanceofdates.cpp
 *
 *  Created on: 2011-11-4
 *      Author: LTY
 */
int main(){
	int startyear,startmonth,startday,endyear,endmonth,endday;
	int days1,days2,days3,i,j=0,t=0;
	cin>>startyear>>startmonth>>startday;
	cin>>endyear>>endmonth>>endday;
	if((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
		{
		int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		days1=startday;
		for(i=1;i<startmonth;i++)
			days1=days1+month[i];
		}
	else
		{
		int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		days1=startday;
		for(i=1;i<startmonth;i++)
			days1=days1+month[i];
		}
	if((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))
			{
			int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
			days2=endday;
			for(i=1;i<endmonth;i++)
				days2=days2+month[i];
			}
		else
			{
			int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
			days2=endday;
			for(i=1;i<endmonth;i++)
				days2=days2+month[i];
			}
	for(i=startyear;i<endyear;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			j=j+1;
		else
			t=t+1;
	}
	days3=(days2-days1)+j*366+t*365;
	cout<<days3<<endl;
	return 0;
}
