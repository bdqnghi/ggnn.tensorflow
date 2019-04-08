void main()
{
	void toy(int b[100][100],int c,int d);
	int a[100][100];
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	toy(a,n,m);
}
void toy(int b[100][100],int c,int d)
{
	int k,l,t;
	if(c==1)
	{for(k=0;k<d;k++)
	printf("%d\n",b[0][k]);
	}
	else if(c==2)
	{
		for(k=0;k<d;k++)
	printf("%d\n",b[0][k]);
		for(k=d-1;k>=0;k--)
	printf("%d\n",b[1][k]);
	}
	else if(d==1)
	{
		for(k=0;k<c;k++)
	printf("%d\n",b[k][0]);
	}
	else if(d==2)
	{
	for(k=0;k<c;k++)
	printf("%d\n",b[k][0]);
		for(k=c-1;k>=0;k--)
	printf("%d\n",b[k][1]);
	}
	else
	{
		for(k=0;k<d;k++)
	        printf("%d\n",b[0][k]);
		for(k=1;k<c-1;k++)
			printf("%d\n",b[k][d-1]);
		for(k=d-1;k>=0;k--)
         	printf("%d\n",b[c-1][k]);
		for(k=c-2;k>=1;k--)
            printf("%d\n",b[k][0]);
		for(l=0;l<c-2;l++)
		{
			for(t=0;t<d-2;t++)
				b[l][t]=b[l+1][t+1];
		}
		toy(b,c-2,d-2);
	}
}