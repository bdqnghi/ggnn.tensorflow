main()
{
	int len;
	char a0[100];
	int a[100],b[100],c[100],d[100];
	scanf("%s",a0);
	len=strlen(a0);
	for(int t=0;t<len;t++)
	{
		a[t]=a0[t]-'0';
	}
	c[0]=a[0];
	if(len==1||(len==2&&a[0]==1&&a[1]<3))
	printf("%d",0);
	for(int i=0;i<len-1;i++)
	{
		b[i]=10*c[i]+a[i+1];
		c[i]=b[i]%13;
		d[i]=(b[i]-c[i])/13;
		c[i+1]=c[i];
		if(d[i]==0&&i==0);
		else
		printf("%d",d[i]);
	}
	printf("\n%d",c[len-1]);
}