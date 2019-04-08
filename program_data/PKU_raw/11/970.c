int main()
{
	int a[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,i,sum=0;
	cin>>y>>m>>d;
	if((y%4==0&&y%100!=0)||(y%400==0))
	{
		for(i=0;i<m-1;i++)
		{
			sum=sum+a[1][i];
		}
	}
	else
	{
		for(i=0;i<m-1;i++)
		{
			sum=sum+a[0][i];
		}
	}
	sum+=d;
	cout<<sum<<endl;
}
