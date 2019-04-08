void main()
{
	int n,i,j,x,y,k,t,c[101],ii;
	scanf("%d",&n);
	for(ii=1;ii<=n;ii++)
	{
	char a[101],b[101];
	scanf("%s",a);
	scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	for(j=y-1,k=x-1;j>=0;j--,k--)
	{
		if(a[k]>=b[j])
			c[k]=a[k]-b[j];
		else
		{
			c[k]=a[k]+10-b[j];
			a[k-1]=a[k-1]-1;
		}
	}
	for(i=0;i<=x-y-1;i++)
		c[i]=a[i]-'0';
	for(j=0;j<x;j++)
	{
		if(c[j]!=0)
		{
			t=j;
			break;
		}
	}
	for(i=t;i<x;i++)
		printf("%d",c[i]);
	printf("\n");
	}
}
