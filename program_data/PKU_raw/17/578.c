void f(int n,char b[])
{
	if(n>0)
		f(n-1,b);
	int i=0,k=0,x=0;
	for(k=0;k<n;k++)
	{
		if(b[k]==')')
		{
			for(x=0;x<=k;x++)
			{
				if(b[k-x]=='(')
				{
					b[k]=' ';
					b[k-x]=' ';
					break;
				}
			}
		}
	}
}
int main()
{
	int j=0;
	for(j=0;j<10;j++)
	{
		char a[200]={0},b[200]={0};
		int i=0,k=0,x=0,n=0;
		for(i=0;;i++)
		{
			a[i]=getchar();
			b[i]=a[i];
			if(b[i]!='('&&b[i]!=')'&&b[i]!='\n')
				b[i]=' ';
			if(a[i]=='\n')
				break;
			n++;
		}
		f(n,b);
		for(i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
		for(i=0;i<n;i++)
		{
			if(b[i]=='(')
				b[i]='$';
			else if(b[i]==')')
				b[i]='?';
		}

		for(i=0;i<n;i++)
			cout<<b[i];
cout<<endl;
	}
	return 0;
}
