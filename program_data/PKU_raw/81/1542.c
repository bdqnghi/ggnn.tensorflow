void main()
{
	int hanshu(int s[5][5],int n,int m);
		int a[5][5],b[1][5];
	int n,m,i,j;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
		scanf("%d %d",&n,&m);
		if(hanshu(a,n,m)==0)
			printf("error\n");
		if(hanshu(a,n,m)==1)
		{
			for(j=0;j<=4;j++)
			{
	    	b[0][j]=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=b[0][j];
			}
          for(i=0;i<=4;i++)
				printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);

		}
}

int hanshu(int a[5][5],int n,int m)
{
	int z;
	if(n>=5||m>=5)
		z=0;
	if(n<5&&m<5)
    	z=1;
		return(z);
}
