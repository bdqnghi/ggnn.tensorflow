/*
 * c.cpp
 * ?????
 * ????: 2011-1-9
 * ???????????
 */

int main(void)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};//????????
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};//???????
	int sy,sm,sd,ey,em,ed;
	int i,sum=0,days=0;//????
	int days1=0,days2=0;
	cin>>sy>>sm>>sd;
	cin>>ey>>em>>ed;
	for(i=sy+1;i<=ey-1;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))//?????
			sum+=366;
		else sum+=365;
	}
	if(ey-sy!=0)//???
	{
	if((sy%4==0&&sy%100!=0)||(sy%400==0))
	{
		for(i=0;i<sm-1;i++)
			days+=b[i];
		days+=sd;
		sum+=(366-days);
	}
	else
	{
		for(i=0;i<sm-1;i++)
			days+=a[i];
		days+=sd;
		sum+=(365-days);
	}
	days=0;
	if((ey%4==0&&ey%100!=0)||(ey%400==0))
	{
		for(i=0;i<em-1;i++)
			sum+=b[i];
		sum+=ed;
	}
	else
	{
		for(i=0;i<em-1;i++)
			sum+=a[i];
		sum+=ed;
	}}
    else//???
	{
		if((sy%4==0&&sy%100!=0)||(sy%400==0))//?????
		{
			for(i=0;i<sm-1;i++)
				days1+=b[i];
			days1+=sd;
			for(i=0;i<em-1;i++)
				days2+=b[i];
			days2+=ed;
			sum=days2-days1;
		}
		else
		{
			for(i=0;i<sm-1;i++)
				days1+=a[i];
			days1+=sd;
			for(i=0;i<em-1;i++)
				days2+=a[i];
			days2+=ed;
			sum=days2-days1;
		}
	}
	cout<<sum<<endl;
	return 0;
}