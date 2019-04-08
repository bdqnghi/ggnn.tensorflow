void main()
{
	int n,k,m,x,y,z,i;
	scanf("%d%d",&n,&k);
	for(z=1;;z++)
	{
		x=z;
		for(i=1;1<=n;i++)
		{
			
		    y=(x*n+k)%(n-1);
		    if(y==0&&i<n)
				x=(x*n+k)/(n-1);
		    else
				break;
	}
	if(i==n)
		break;
	}
		m=x*n+k;
	printf("%d",m);
}