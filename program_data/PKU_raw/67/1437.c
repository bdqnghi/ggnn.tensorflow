int main()
{
	double*y;
	int M,m,i,n;

	scanf("%d",&n);
	y=(double*)malloc(sizeof(double)*n);
	double x;
	scanf("%d%d",&M,&m);
		
	x=(double)m/M;
		
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&M,&m);
		
			y[i]=(double)m/M;
	}
	for(i=0;i<n-1;i++)
	{
			if(x-y[i]>0.05)
			{
				printf("worse\n");
			}
			
			else 
			{
				if(y[i]-x>0.05)
				{
				printf("better\n");
				}
			
			    else
				{
				printf("same\n");
				
				}
			}
	}

	free(y);
	
	return 0;
}