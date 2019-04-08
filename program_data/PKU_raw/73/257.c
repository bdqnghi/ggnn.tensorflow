int main()
{
	int a[5][5];
	int hang=0,lie=0,p=-1;
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4]&&a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j])
			{
				p=a[i][j];
				hang=i+1;
				lie=j+1;
				printf("%d %d %d\n",hang,lie,p);
			}
		}
	}
	if(p==-1)
		printf("not found\n");
	return 0;
}

