void main()
{
	int a[8][8],m,n,i,j,k=0,max[8]={0},min[8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			max[i]=a[i][j]>max[i]?a[i][j]:max[i];
        for(j=0;j<n;j++)
		{min[j]=a[1][j];
			for(i=0;i<m;i++)
				min[j]=a[i][j]<min[j]?a[i][j]:min[j];}
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(max[i]==min[j])
			{printf("%d+%d\n",i,j);
			k=1;}
    if(k==0)
		printf("No\n");
}


