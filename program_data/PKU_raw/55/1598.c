int main()
{
	double a,b,d;
	int e[1000];
	char c[1000];
	cin>>a>>c>>b;
	d=strlen(c);
	for(int i=0;i<d;i++)
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			e[i]=c[i]-48;
		}
		else if(c[i]>='A'&&c[i]<='Z')
		{
			e[i]=c[i]-55;
		}
		else if(c[i]>='a'&&c[i]<='z')
		{
			e[i]=c[i]-87;
		}
	}
	long long num=0;
	for(int i=0;i<d;i++)
	{
		num=num+e[i]*pow(a,(d-i-1));
	}
	long long k[1000];
	long long sum;
	sum=num;
	int t=-1;
	int m;
	m=b/1;
	for(int i=0;i<1000;i++)
	{
		k[i]=sum%m;
		sum=sum/m;
		t=t+1;
		if(sum<1)break;
	}
	char l[1000];
	for(int i=0;i<=t;i++)
	{
		if(k[t-i]>=0&&k[t-i]<=9)
		{
			l[i]=k[t-i]+48;
		}
		else if(k[t-i]>=10&&k[t-i]<=35)
		{
			l[i]=k[t-i]+55;
		}
	}
	for(int i=0;i<=t;i++)
	{
		cout<<l[i];
	}
	cout<<endl;
	
	return 0;
}