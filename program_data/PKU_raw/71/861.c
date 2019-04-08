int f(int a)
{
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}
int f1(int x,int y)
{
	if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
		return 31;
	else if(x==4||x==6||x==9||x==11)
		return 30;
	else if(x==2&&y==1)
		return 29;
	else
		return 28;
}
int main()
{
	int n,i,j,s;
	cin>>n;
	int a,b,c;
	while(n--)
	{
		s=0;
		cin>>a>>b>>c;
		if(b<c)
		{
			j=f(a);
			for(i=b;i<c;i++)
			{
				s=s+f1(i,j);
			}
		}
		else
		{
			j=f(a);
			for(i=c;i<b;i++)
			{
				s=s+f1(i,j);
			}
			/*for(i=1;i<=c;i++)
			{
				j=f(a+1);
				s=s+f1(i,j);
			}*/
		}
		if(s%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}


