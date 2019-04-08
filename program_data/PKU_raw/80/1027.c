int yue( int m,int n)
{
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
		return 31;
	else if(n==4 || n==6 || n==9 || n==11)
		return 30;
	else if((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0) && n==2)
		return 29;
	else
		return 28;
}
int nian(int m)
{
	if((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0))
		return 366;
	else
		return 365;
}
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c;
	cout<<endl;
	cin>>d>>e>>f;
	int sum=0,t=0;
	if(a==d)
	{
		for(int i=b;i<e;i++)
		{
			sum=sum+yue(a,i);
		}
		cout<<sum+f-c;
	}
	else
	{
		for(int i=a;i<d;i++)
		{
			sum=sum+nian(i);
		}
		if(b==e)
		{
			cout<<sum+f-c;
		}
		else if(e>b)
		{
			for(int s=b;s<e;s++)
			{
				sum=sum+yue(d,s);
			}
			cout<<sum+f-c;
		}
		else
		{
			for(int s=e;s<b;s++)
			{
				t=t+yue(d,s);
			}
			cout<<sum-(t+c-f);
		}
	}
	return 0;
}
		
