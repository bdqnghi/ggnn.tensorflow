void main()
{
	int i,j,k,l,x[1000],y[1000],flag=0;
	scanf("%d%d",&x[0],&y[0]);
	for (i=0;x[i]>1;i++)
	{
		if (x[i]%2==0)
			x[i+1]=x[i]/2;
		else x[i+1]=(x[i]-1)/2;
	}
	k=i;
	for (j=0;y[j]>1;j++)
	{
		if (y[j]%2==0) y[j+1]=y[j]/2;
		else y[j+1]=(y[j]-1)/2;
	}
	l=j;
	for (i=0;i<=k;i++)
	{
		for (j=0;j<=l;j++)
		{
			if (x[i]==y[j])
			{
				printf("%d\n",y[j]);
				flag=1;
				break;
			}
			if (flag==1) break;
		}
	}
}