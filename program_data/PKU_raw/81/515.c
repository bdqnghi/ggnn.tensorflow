int jiaohuan(int n,int m,int a[5][5])
{
	int i,c,t;
	if(((m<0)||(m>4))||((n<0)||(n>4)))
	{
		c=0;
	}
	else
	{
		c=1;
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
	}
	return (c);
	

} 
void main()
{ 
	int n,m,c,i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	c=jiaohuan(n,m,a);
	if(c==0)
	{
		printf("error");
	}
	if(c==1)
	{
			for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	}	
}
