void main()
{
	double a[100][2],k,dis;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf",&a[i][j]);}
	}
 k=sqrt((a[0][0]-a[n-1][0])*(a[0][0]-a[n-1][0])+(a[0][1]-a[n-1][1])*(a[0][1]-a[n-1][1]));
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i+1;j--)
		{
			dis=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(dis>k)
			{
				k=dis;}
            
		
				
				
					
		}
	}
printf("%.4f\n",k);
}