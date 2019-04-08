int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,sum=0;
	cin>>y>>m>>d;
	if((y%4==0 && y%100!=0) || y%400==0)
	{
		for(int i=m-2;i>=0;i--)
		{
			sum=sum+b[i];
		}
		cout<<sum+d;
	}
	else
	{
		for(int s=m-2;s>=0;s--)
		{
			sum=sum+a[s];
		}
		cout<<sum+d;
	}
	return 0;
}
	