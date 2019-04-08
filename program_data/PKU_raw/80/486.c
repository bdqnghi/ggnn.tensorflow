// jisuan.cpp : Defines the entry point for the console application.
// ??????????????? 
int main()
{
	int startyear=0,startmonth,startday;
	int endyear=0,endmonth,endday;
	cin>>startyear>>startmonth>>startday;
	cin>>endyear>>endmonth>>endday;
	int leapyear=0,sum1=0,sum2=0,sum3=0;
	int year[2]={365,366};
	int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	leapyear=((startyear%4==0)&&(startyear%100!=0))||(startyear%400==0);
	for(int i=0;i<startmonth-1;i++)
	{
		sum1=sum1+month[leapyear][i];
	}
	sum1=sum1+startday;
	for(int i=startyear;i<endyear;i++)
	{
		leapyear=((i%4==0)&&(i%100!=0))||(i%400==0);
		sum2=sum2+year[leapyear];
	}
    leapyear=((endyear%4==0)&&(endyear%100!=0))||(endyear%400==0);
	for(int k=0;k<endmonth-1;k++)
	{
		sum3=sum3+month[leapyear][k];
	}
	sum3=sum3+endday;
	sum2=sum2+sum3-sum1;
	cout<<sum2;
	return 0;
}





	