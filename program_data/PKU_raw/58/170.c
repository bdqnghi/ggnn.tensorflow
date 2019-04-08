int biaozhi(char a[])
{
	int l,i;
	char *p;
	p=a;
	if((a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')||a[0]=='_')
	{
		for(i=1;i<strlen(a);i++)
		{
			if((*(p+i)<='z'&&*(p+i)>='a')||(*(p+i)<='Z'&&*(p+i)>='A')||*(p+i)=='_'||(*(p+i)>='0'&&*(p+i)<='9'))
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
	char a[85];
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
		if(biaozhi(a))
			printf("1\n");
		else
			printf("0\n");
	}
}
