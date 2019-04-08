int main()

{
	int n;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	int y,m1,m2,sum;
	for(int i=1;i<=n;i++)
	{
		sum=0;
		int temp;
		cin>>y>>m1>>m2;
		if(m1>m2)
		{
			temp=m1;
			m1=m2;
			m2=temp;

		}
		if((y%4==0 && y%100!=0) || y%400==0)
		{
			for(int s=m1-1;s<=m2-2;s++)
			{
				sum=sum+b[s];
			}
		}
		else
		{
			for(int s=m1-1;s<=m2-2;s++)
			{
				sum=sum+a[s];
			}
		}
		if(sum%7==0)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}
