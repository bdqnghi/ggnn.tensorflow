int biaozhi(char a[])
{
	int i,l;
	if((a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')||a[0]=='_')
	{
		for(i=1;i<strlen(a);i++)
		{
			if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A')||a[i]=='_'||(a[i]>='0'&&a[i]<='9'))
			{
				l=1;
			}
			else
			{
				l=0;
				break;
			}
		}
		return l;
	}
	else
		return 0;
}
void main()
{
	int n,i;
	char a[25];
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
		if(biaozhi(a))
			printf("yes\n");
		else
			printf("no\n");
	}
}