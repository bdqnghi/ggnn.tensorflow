int panduan(int(year));
int main()
{
	int sum=0,year,month,day;
	int i;
	int Month1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int Month2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month>>day;
	if(panduan(year)==1)
	{
		for(i=1;i<month;i++)
			sum += Month1[i];
	    sum += day;
		cout<<sum;
		return 0;
	}
	else 
	{
		for(i=1;i<month;i++)
			sum += Month2[i];
	    sum += day;
		cout<<sum;
		return 0;
	}
	return 0;
}
int panduan(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else 
		return 0;
}
