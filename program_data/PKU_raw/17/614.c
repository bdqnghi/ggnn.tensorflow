int main()
{
	char a[100];
	while(cin>>a)
	{
		cout<<a<<endl;
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]==')')
			{
				for(int j=i-1;j>=0;j--)
					if(a[j]=='(')
					{
						a[i]=a[j]=' ';
						break;
					}
			}
			if(a[i]!='('&&a[i]!=')')
				a[i]=' ';
		}
		for(int i=0;i<l;i++)
		{
			if(a[i]=='(')cout<<'$';
			else if(a[i]==')')cout<<'?';
			else cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}