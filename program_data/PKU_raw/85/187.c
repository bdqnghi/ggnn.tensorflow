int main()
{
	int n,i,j,b;
	char a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		b=1;
		gets(a);
		if(a[0]>='0'&&a[0]<='9') b=0;
		for(j=0;a[j]!='\0';j++)
		{
			if((a[j]<'0'||(a[j]>'9'&&a[j]<'A')||a[j]>'z'||(a[j]>'Z'&&a[j]<'a'))&&(a[j]!='_')){b=0;break;}
		}
		if(b==1)printf("yes\n");
		else if(b==0)printf("no\n");
	}
	return 0;
}
