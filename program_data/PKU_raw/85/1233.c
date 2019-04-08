int check(char a[])
{
	int i,n;
	n=strlen(a);
	if(!(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')))
		return 0;
	else
	{
		for(i=1;i<n;i++)
		{
			if(!((a[i]>='0'&&a[i]<='9')||a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')))
				return 0;
		}
	}
	return 1;
}
void main()
{
	char a[21];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		if(check(a))
			printf("yes\n");
    	else
	    	printf("no\n");
	}
}