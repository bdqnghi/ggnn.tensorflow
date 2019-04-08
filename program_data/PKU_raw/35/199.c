void main()
{
	int i,j,r,k=0,m,n,max,s,p=0;
	int a[8][8];
	scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{	
		max=a[i][0];
		for(j=0;j<n;j++)
		{  	
			if(a[i][j]>max)
			{
				max=a[i][j];
				k=j;
			}

		}
		s=0;
		for(r=0;r<m;r++)
           if(a[r][k]<max)s++;
		   if(s==0)
			   printf("%d+%d\n",i,k);
           else p++; 
	}
	if(p==m)
		printf("No");
}
