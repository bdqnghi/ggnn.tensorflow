int main()
{
	int a[20][16],b[20]={0},i=0,j,k=0;
	scanf("%d",&a[0][0]);
	i++;
	while(a[k][0]!=-1)          //input the chunk of data
	{
		do 
		{
			scanf("%d",&a[k][i]);
			i++;
		}
		while(a[k][i-1]!=0);
		k++;
		scanf("%d",&a[k][0]);
		i=1;
	}

	for(k=0;a[k][0]!=-1;k++)
	{
	    for(i=0;a[k][i]!=0;i++)
		{
			for(j=i+1;a[k][j]!=0;j++)
			{
				if((a[k][j]/a[k][i]==2&&a[k][j]%a[k][i]==0)||(a[k][i]/a[k][j]==2&&a[k][i]%a[k][j]==0))//judge double numbers
					b[k]++;
			}
		}
		printf("%d\n",b[k]);
	}
	return 0;
}
