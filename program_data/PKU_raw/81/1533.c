int change(int a[5][5],int n,int m)
{
	int z,c[5],j;
	if(m>=0&&m<5&&n>=0&&n<5)
	{
		for(j=0;j<5;j++)
			{
			c[j]=a[n][j];
		    a[n][j]=a[m][j];
		    a[m][j]=c[j];
			}
	    z=1;
	}
	if(m>4||n>4)
		z=0;
	return (z);
}

void main()
{
	int a[5][5],i,j,m,n;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
		scanf("%d %d",&n,&m);
		if(change(a,n,m)==0)
			printf("error");
		else
		{
			for(i=0;i<5;i++)
			{
				printf("\n");
			printf("%d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
			}
		}
}