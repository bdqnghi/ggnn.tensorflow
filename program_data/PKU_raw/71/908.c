int main()
{
	int n,sum=0,a,b,c,A[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		cin>>a>>b>>c;
		if(b>c)
		{A[0]=b;
		b=c;
		c=A[0];
		}
		if(a%4==0&&a%100!=0||a%400==0)
		{
			A[2]=A[2]+1;
			for(int j=b;j<c;j++)
			{
				sum+=A[j];
			}
			//cout<<sum<<" "<<b<<" "<<c;
			if(sum%7==0)
			{	cout<<"YES";}
			else
			{	cout<<"NO";}
			A[2]--;
		}
		else
		{
			for(int j=b;j<c;j++)
			{
				sum+=A[j];
			}
			if(sum%7==0)
				cout<<"YES";
			else
				cout<<"NO";
		}
		
cout<<endl;
	}
	return 0;
}