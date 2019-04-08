int main()
{
	int n;
	int t=1,sig;
	int num;
	int s=0;
	cin>>n;
	char a[110];
	for(int i=1;i<=109;i++)
		a[i]='*';
	a[1]='2';
	if(n==0)
		cout<<1<<endl;
	else if(n==1)
		cout<<2<<endl;
	else if(n!=0&&n!=1)
	{
		
		for(int i=1;i<=n-1;i++)
		{
			sig=t;
			for(int j=1;j<=sig;j++)
			{
				num=a[j]-48;
				num=2*num+s;
			    s=0;
				if(num<10)
					a[j]=num+48;
				else
				{
					a[j]=num+38;
					if(a[j+1]=='*')
					{
						a[j+1]='1';
						t++;
					}
					else
					{
					  s=1;
					}
				}
			}
		}
		for(int i=109;i>=1;i--)
			if(a[i]!='*')
			{
				cout<<a[i];
			}
	}
	return 0;
}