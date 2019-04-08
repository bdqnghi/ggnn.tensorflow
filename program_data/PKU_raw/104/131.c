void main()
{
	int i=0,j,m,n,p[20],q[20],x[20],y[20];
	scanf("%d%d",&m,&n);
	for(i=0;i<=20;i++)
	{
		if(m>=1)
		{
		x[i]=m;
		m=m/2;
		}
		else
			break;
	}
	for(j=0;j<=i;j++)
		p[j]=x[i-j-1];
	for(i=0;i<=20;i++)
	{
		if(n>=1)
		{
		y[i]=n;
		n=n/2;
		}
		else
			break;
	}
	for(j=0;j<=i;j++)
		q[j]=y[i-j-1];
	for(i=0;i<=20;i++)
		if(p[i]!=q[i])
		{
			printf("%d",p[i-1]);
			break;
		}
}













