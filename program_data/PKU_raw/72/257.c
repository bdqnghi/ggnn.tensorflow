int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i=0,j=0;
	int **pp;
	pp=(int **)malloc(sizeof (int *)*(m+2));
	for(i=0;i<m+2;i++)
    {
        pp[i]=(int *)malloc(sizeof (int)*(n+2));
	}    
	for(i=0;i<m+2;i++)
	for(j=0;j<n+2;j++)
	{
		if((i*j)!=0&&i!=(m+1)&&j!=(n+1))
		scanf("%d",&pp[i][j]);
		else
		pp[i][j]=0;
	}
	int k=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(pp[i][j]>=pp[i-1][j])
			k=k+1;
			if(pp[i][j]>=pp[i+1][j])
			k=k+1;
			if(pp[i][j]>=pp[i][j-1])
			k=k+1;
			if(pp[i][j]>=pp[i][j+1])
			k=k+1;
			if(k==4)
			printf("%d %d\n",i-1,j-1);
			k=0;	
		}	
	}
	for(i=0;i<m;i++)
    free(pp[i]);
    free(pp);
	return 0; 	
}

