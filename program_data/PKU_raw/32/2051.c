void main()
{
	int n,i,j,p,q;
	char a[100],b[100],c[100]={0},a1[100],b1[100];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%s%s",a,b);
		strcpy(a1,a);
		strcpy(b1,b);
		p=strlen(a);
		q=strlen(b);
	for(i=100-p;i<=99;i++)
		a1[i]=a[i-100+p];
	for(i=0;i<=99-p;i++)
		a1[i]=0;
    for(i=100-q;i<=99;i++)
		b1[i]=b[i-100+q];
	for(i=100-p;i<=99-q;i++)
		b1[i]='0';
	for(i=0;i<=99-p;i++)
		b1[i]=0;
	for(i=99;i>=100-p;i--)
		if(a1[i]>=b1[i])
			c[i]=a1[i]-b1[i]+48;
		else
		{
			c[i]=10+a1[i]-b1[i]+48;
			a1[i-1]--;
		}
	for(i=100-p;i<=99;i++)
		printf("%c",c[i]);
	printf("\n");
	}
}
