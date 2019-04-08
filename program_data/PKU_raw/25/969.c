int main()
{
	int n,num1,num2,s=0;;
	char a[110];
	for(int i=1;i<=109;i++)
		a[i]='*';
	cin>>n;
	int t=1;
	int sig;
	a[1]='2';
	if(n==1)
		cout<<2<<endl;
	else
	{
		if(n==0)
			cout<<1;
		else
		{
			for(int i=1;i<=n-1;i++)
			{
				sig=t;
				for(int j=1;j<=sig;j++)
				{
					num1=a[j]-48;
					num1=num1*2+s;
					s=0;
					if(num1<10)
						a[j]=num1+48;
					else
					{
						a[j]=num1+38;
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
			{
				if(a[i]!='*')
				{
					cout<<a[i];
				}
			}
		}
	}
	return 0;
}