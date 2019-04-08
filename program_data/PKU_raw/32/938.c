void main()
{
	int n,la,lb,j,t;
	char a[100],b[100];
	int c[100];
	scanf("%d",&n);
	int i;	
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=0;j<100;j++)c[j]=0;
		scanf("%s",a);
		scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(j=0;j<lb;j++)
		{
			c[j]=c[j]+a[la-1-j]-b[lb-1-j];
			if (c[j]<0)
			{
				c[j]=c[j]+10;
				c[j+1]-=1;
			}
		}
		for(j=lb;j<la;j++) c[j]=c[j]+a[la-1-j]-48;
		for(j=99;j>=0;j--)
		{
			if (c[j]!=0) {printf("%d",c[j]);t=1;}
			else if (t!=0) printf("%d",c[j]);
		}
		printf("\n");
	}
}