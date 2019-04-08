void main()
{
	int a[8][8],m,n,i,j,l,k,x,sum;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
		for(i=0,sum=0;i<m;i++)
		{
			
			for(j=1,k=0;j<n;j++)
				if(a[i][j]>a[i][k])
				k=j;
            for(x=0,l=0;x<m;x++)
				if(a[x][k]<a[i][k])
					l=1;
			if(l==0)
			{
				printf("%d+%d\n",i,k);
					sum=1;
			}
		}
		if(sum==0)printf("No");
}
