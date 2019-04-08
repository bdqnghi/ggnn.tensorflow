int main()
{
	int i,l,j,n;
	char a[81];
	scanf("%d\n",&n);
	for(j=1;j<=n;j++)
	{
		gets(a);
        l=strlen(a);
		i=0;
		if(('A'<=a[0]&&a[0]<='Z')||('a'<=a[0]&&a[0]<='z')||(a[0]=='_'))
		{
			for(i=1;i<l;i++)
			{
				if(!(('A'<=a[i]&&a[i]<='Z')||('a'<=a[i]&&a[i]<='z')||('0'<=a[i]&&a[i]<='9')||a[i]=='_'))
					break;
			}
		}
		if(i>=l)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
