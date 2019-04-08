void main()
{
	int m,n,i,j,k,flag=0;
	int a[8][8],max,c[2],min;
	
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
    

    for(i=0;i<m;i++)
	{
		max=a[i][0];
		c[0]=i;c[1]=0;
		for(j=1;j<n;j++)
			if(a[i][j]>max)
			{  max=a[i][j];
				c[1]=j;}
		
		min=max;
		j=c[1];
		for(k=0;k<m;k++)
			if(a[k][j]<min)
			{ 
			min=a[k][j];
			c[0]=k;
			}
	
		if(c[0]==i&&c[1]==j)
		{
			printf("%d+%d",c[0],c[1]);
			flag=1;}
	}
	if(flag==0) printf("No");



		
}