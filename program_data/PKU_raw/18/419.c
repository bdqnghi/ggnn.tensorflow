
enum{size=100};

void gotozero(int num, int n,int a[size][size][size],int minrow[size][size],int mincol[size][size])
{
	int i,j,k;

	for(i=0;i<num;i++)
	{
		for(j=0;j<n;j++)
		{
			minrow[i][j]=a[i][j][0];
			for(k=0;k<n;k++)	if(minrow[i][j]>a[i][j][k])		minrow[i][j]=a[i][j][k];
		}
	}

	for(i=0;i<num;i++)
	{
		for(j=0;j<n;j++)	for(k=0;k<n;k++)	a[i][j][k]-=minrow[i][j];
	}
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<n;j++)
		{
			mincol[i][j]=a[i][0][j];
			for(k=0;k<n;k++)	if(mincol[i][j]>a[i][k][j])		mincol[i][j]=a[i][k][j];
		}
	}

	for(i=0;i<num;i++)
	{
		for(j=0;j<n;j++)	for(k=0;k<n;k++)	a[i][k][j]-=mincol[i][j];
	}
}

void cut(int num, int n,int a[size][size][size],int minrow[size][size],int mincol[size][size])
{
	int i,j,k;
	for(i=0;i<num;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=2;k<n;k++)	a[i][j][k-1]=a[i][j][k];
		}	
	}

	for(i=0;i<num;i++)
	{   
		for(k=0;k<n;k++)
		{
			for(j=2;j<n;j++)	a[i][j-1][k]=a[i][j][k];
		}
	}
}

void main()
{
	int i,j,k,n,num;
	int a[size][size][size]={0},minrow[size][size]={0},sum[size]={0},mincol[size][size]={0};

	//&para;&Aacute;&Egrave;&euml;&Ecirc;&yacute;&frac34;&Yacute;	
	scanf("%d",&n);
	num=n;
	for(i=0;i<n;i++)	for(j=0;j<n;j++)	for(k=0;k<n;k++)	scanf("%d",&a[i][j][k]);
	
	while(n>1)
	{
		gotozero(num,n,a,minrow,mincol);
		for(i=0;i<num;i++)	sum[i]+=a[i][1][1];//&acute;&aelig;&acute;&cent;
		cut(num,n,a,minrow,mincol);
		n--;
	}

	for(i=0;i<num;i++)			printf("%d\n",sum[i]);
}