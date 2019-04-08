void main()
{
	double len,lenmax,x[100],y[100];
	int i,j,n;
	lenmax=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<=n-2;i++)
	{ 
        for(j=i+1;j<=n-1;j++)
		{
           len=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
		   if(len>lenmax)
			  lenmax=len;

		}
	}
	
     printf("%.4lf\n", lenmax);
}