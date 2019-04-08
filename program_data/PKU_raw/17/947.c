
int main()
{
	char a[100]={0	};
	while(cin>>a)
	{
		cout<<a<<endl;
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			switch(a[i])
			{
				case '(':
					a[i]='$';
					break;
				case ')':
					a[i]='?';
					break;
				default:
					a[i]=' ';
			}
			if(i>l)
				break;
		}
		for(int i=0;i<l;i++)
		{
			if(a[i]=='$')
				for(int j=i+1;j<l;j++)
				{
					if(a[j]=='?')
					{
						a[i]=a[j]=' ';
						break;
					}
					if(a[j]=='$')
						break;
				}
			if(a[i]=='?')
				for(int j=i-1;j>=0;j--)
				{
					if(a[j]=='$')
					{
						a[i]=a[j]=' ';
						break;
					}
					if(a[j]=='?')
						break;
				}
		}
		for(int i=0;i<l;i++)
			cout<<a[i];
		cout<<endl;
		for(int i=0;i<100;i++)
			a[i]=0;
	}
}
