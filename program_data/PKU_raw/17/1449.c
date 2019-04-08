main()
{
	
	char a[101];
	int l,i,j,n;
while(scanf("%s",a)!=EOF)
	{
	
	l=strlen(a);
	puts(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!='('&&a[i]!=')')
			a[i]=' ';
		else
		{
			if(a[i]==')')
			{
				n=0;
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')
					{
						a[i]=' ';
						a[j]=' ';
						n++;
						break;
					}
				}
				if(n==0)
					a[i]='?';
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]=='(')
			a[i]='$';
	}
	puts(a);}
	return 0;
}
