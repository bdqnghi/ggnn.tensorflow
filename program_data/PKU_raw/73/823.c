int main()
{
	int a[6][6];
	int i,j;
	for (i=1;i<6;i++)
	{
		for (j=1;j<6;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	int max,min;
	for (i=1;i<6;i++)
	{
		a[i][0]=1;
		max=a[i][1];
		for (j=1;j<6;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				a[i][0]=j;
			}
		}
	}
	for (i=1;i<6;i++)
	{
		a[0][i]=1;
		min=a[1][i];
		for (j=1;j<6;j++)
		{
			if (a[j][i]<min)
			{
				min=a[j][i];
				a[0][i]=j;
			}
		}
	}
	int t=0;
	for (i=1;i<6;i++)
	{
			if (a[0][a[i][0]]==i)
			{
				t++;
				printf ("%d %d %d\n",i,a[i][0],a[i][a[i][0]]);
			}
	}
	if (t==0)
		printf ("not found\n");

} 