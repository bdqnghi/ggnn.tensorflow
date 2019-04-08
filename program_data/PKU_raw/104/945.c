void main()
{
	int x[1100],y[1100],i,j,m,n,t;
	scanf("%d %d",&x[0],&y[0]);
	for(i=1;x[i-1]>1;i++)
	{
		if(x[i-1]%2==0)
			x[i]=x[i-1]/2;
		else
			x[i]=(x[i-1]-1)/2;
	}
	m=i-1;
	for(j=1;y[j-1]>1;j++)
	{
		if(y[j-1]%2==0)
			y[j]=y[j-1]/2;
		else
			y[j]=(y[j-1]-1)/2;
	}
	n=j-1;
	for(i=m,j=n;i>=0 && j>=0;i--,j--)
	{
		if(x[i]!=y[j])
		{
			t=i+1;
			break;
		}
		else
			if(i==0 || j==0)
				t=i;
	}
	printf("%d",x[t]);
}


