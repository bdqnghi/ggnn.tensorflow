int replace(int b[5][5],int n1,int m1)
{
	int ret,dummy[5],k;
	if(n1<0||n1>4||m1<0||m1>4)ret=0;
	else 
	{
		for(k=0;k<5;k++)
		{
			dummy[k]=b[n1][k];
			b[n1][k]=b[m1][k];
		    b[m1][k]=dummy[k];
		    ret=1;
		}
	}
	return(ret);
}
void main()
{
	int a[5][5],n,m,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(replace(a,n,m)==0)printf("error\n");
	else for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==4)printf("%d\n",a[i][j]);
			else printf("%d ",a[i][j]);
		}
	}
}
