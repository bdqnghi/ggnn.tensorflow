
int main()
{
	char a[200];
	int b[200];
	int n,len;
	cin>>n;
	cin.get();
	for (int i=0;i<n;i++)
	{
		memset(b,0,sizeof(b));
		cin.getline(a,200);
		len=strlen(a);
		for (int i=0;i<len;i++)
		{
			cout<<a[i];
			switch(a[i])
			{
			case '(':b[i]=1;break;
			case ')':b[i]=2;break;
			default :b[i]=3;break;
			}
		}
		cout<<endl;
		for (int i=0;i<len;i++)
		{
			if (b[i]==2)
			{
				for (int j=i;j>=0;j--)
				{
					if (b[j]==1)
					{
						b[j]=3,b[i]=3;
						break;
					}
				}
			}
		}
		for (int i=0;i<len;i++)
		{
			if (b[i]==1)
			{
				cout<<'$';
			}
			else if (b[i]==2)
			{
				cout<<'?';
			}
			else
			{
				cout<<' ';
			}
			
		}
		cout<<endl;
	}



















	return 0;
}