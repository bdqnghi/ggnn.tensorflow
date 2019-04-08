int f(char a[],int n)
{
	int i;
	if(a[n-1]=='r'&&a[n-2]=='e')
	{
		for(i=0;i<n-2;i++)
		{
			printf("%c",a[i]);
		}
	}
	if(a[n-1]=='y'&&a[n-2]=='l')
	{
		for(i=0;i<n-2;i++)
		{
			printf("%c",a[i]);
		}
	}
	if(a[n-3]=='i'&&a[n-2]=='n'&&a[n-1]=='g')
	{
		for(i=0;i<n-3;i++)
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
	return (0);
}
void main()
{
	int n,y,i,x;
	scanf("%d\n",&n);
	char s[20];
	for(i=0;i<n;i++)
	{
		
		gets(s);
		x=strlen(s);
		y=f(s,x);
	}
}

 