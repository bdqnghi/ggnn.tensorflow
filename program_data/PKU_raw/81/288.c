void main()
{
	int a[5][5],i,j,m,n;
	int exchange(int x,int y,int a[5][5]);

	for(i=0;i<5;i=i+1)
	{
		for(j=0;j<5;j=j+1)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	exchange(m,n,a);
	if(exchange(m,n,a)==0) printf("error\n");
	else if(exchange(m,n,a)==1)
	{
		for(i=0;i<5;i=i+1)
		{
			for(j=0;j<5;j=j+1)
			{
				if(j!=4) printf("%d ",a[i][j]);
				else printf("%d",a[i][j]);
			}
			printf("\n");
		}
	}
}

int exchange(int x,int y,int a[5][5])
{
	int z,k,temp;
	if(x<5&&y<5)
	{
		z=1;
		for(k=0;k<5;k=k+1)
		{
			temp=a[x][k];
			a[x][k]=a[y][k];
			a[y][k]=temp;
		}
	}
	else z=0;
	return(z);
}