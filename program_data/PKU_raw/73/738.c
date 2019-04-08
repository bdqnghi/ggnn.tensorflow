int main()
{
	int a[5][5],max[5],mi[5];
	int i,j,k,m,n,x,y;
	k=0;m=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<5;j++)
	{
		m=0;
		for(i=0;i<5;i++)
	{
		if(m<a[j][i])
		m=a[j][i];}
		max[j]=m;
	}
	for(j=0;j<5;j++)
	{
		n=a[0][j];
		for(i=0;i<5;i++)
	{
		
		if(n>a[i][j])
		n=a[i][j];}
		mi[j]=n;
	}
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==max[i]&&a[i][j]==mi[j])
			{
				
			printf("%d %d %d",i+1,j+1,a[i][j]);
			k++;}
		}
	}
	if(k==0)
	printf("not found");
	
	
}