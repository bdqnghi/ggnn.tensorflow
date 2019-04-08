main()
{
	char str[101];
	scanf("%s",str);
	int a[100],b[100],c[100],d[100];
	int i,len;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		a[i]=str[i]-'0';
	}
	b[0]=a[0];
	if(len==1) printf("0");
	if(len==2&&a[1]<3&&a[0]==1) printf("0");
	for(i=0;i<len-1;i++)
	{
		c[i]=b[i]*10+a[i+1];
		b[i]=c[i]%13;
		d[i]=(c[i]-b[i])/13;
		b[i+1]=b[i];
	    if(d[i]==0&&i==0);
		else
		printf("%d",d[i]);
	}
	printf("\n%d",b[len-1]);
}