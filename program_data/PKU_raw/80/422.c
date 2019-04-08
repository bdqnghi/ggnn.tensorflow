int run(int year);
int main()
{
	int sy,sm,sd,ey,em,ed,i,sum=0;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>sy>>sm>>sd;
	cin>>ey>>em>>ed;
	for(i=sy;i<ey;i++)
	{
		if(run(i)==1)
			sum+=366;
		else
			sum+=365;
	}
	for(i=1;i<sm;i++)
	{
		sum-=m[i];
		if(i==2&&run(sy)==1)
			sum--;
	}
	sum-=sd;
	for(i=1;i<em;i++)
	{
		sum+=m[i];
		if(i==2&&run(ey)==1)
			sum++;
	}
	sum+=ed;
	cout<<sum<<endl;
	return 0;
}
int run(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}