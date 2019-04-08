void main()
{
	int b[101],t,n,i,j;
	char a[101];
	while(gets(a))
	{
		for(i=0;i<101;i++)
			b[i]=0;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]=='(')
			{
				t=-1;
				for(j=i+1;j<n;j++)
				{
					if(a[j]=='(')
					{	t--;}
					if(a[j]==')')
					{	t++;}
					if(t==0)break;
				}
				if(t<0)b[i]=1;
			}
			if(a[i]==')')
			{
				t=-1;
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')
					{	t++;}
					if(a[j]==')')
					{	t--;}
					if(t==0)break;
				}
				if(t<0)b[i]=2;
			}
		}
		for(i=0;i<n;i++)
		printf("%c",a[i]);
		printf("\n");
		for(i=0;i<n;i++)
		{
		if(b[i]==0)printf(" ");
		if(b[i]==1)printf("$");
		if(b[i]==2)printf("?");
		}
		printf("\n");
	}
}

