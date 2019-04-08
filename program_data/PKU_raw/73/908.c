int main()
{
	int a[5][5];
	int hang[5]={0,0,0,0,0};
	int lie[5]={0,0,0,0,0};
	int i,j,b,w=0;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	int max[5];
	int min[5];
	for (i=0;i<5;i++)
	{
		max[i]=a[i][0];
		for (j=0;j<5;j++)
		{
			if (a[i][j]>max[i])
			{
				max[i]=a[i][j];
				lie[i]=j;
			}
		}
	}
	for (j=0;j<5;j++)
	{
		min[j]=a[0][j];
		for (i=0;i<5;i++)
		{
			if (a[i][j]<min[j])
			{
				min[j]=a[i][j];
				hang[j]=i;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		b=lie[i];
		if (hang[b]==i)
		{      
			printf("%d %d %d\n",i+1,b+1,max[i]);
			w++;
		}
	}
	if (w==0)
	printf ("not found");
}