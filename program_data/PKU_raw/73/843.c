int main()
{
	int a[5][5],b[5][5],maxh[5],minl[5];
	int i,j,k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	       { scanf("%d",&a[i][j]);
		     b[i][j]=a[i][j];}
	}
	for(i=0;i<5;i++)
	{
		maxh[i]=a[i][0];
		for(j=1;j<5;j++)
			maxh[i]=maxh[i]>a[i][j]?maxh[i]:a[i][j];
	}
	for(i=0;i<5;i++)
	{
		minl[i]=a[0][i];
		for(j=1;j<5;j++)
			minl[i]=minl[i]<a[j][i]?minl[i]:a[j][i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(maxh[i]==minl[j])
			{printf("%d %d %d",i+1,j+1,maxh[i]);k=1;}
		}
	}
	if(k==0)
	{
		printf("not found");
	}
}
