int main()
{
	int a[101][16],b[100]={0},c[101],k,i,j,l,m;
	for (i=1;1;i++)
	{
		scanf("%d",&a[i][1]);
	    if (a[i][1]==(-1))
		{
			i--;
			break;
		}
		else
			for (j=2;1;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]==0)
			{
				j=j-1;
				break;
			}
		}
		c[i]=j;
	}
	
	for (k=1;k<=i;k++)
	{
		for (l=1;l<=c[k];l++)
		{
			
			for (m=1;m<=c[k];m++)
			{
				if (a[k][m]/a[k][l]==2&&a[k][m]%a[k][l]==0)
					b[k]=b[k]+1;
				else
					b[k]=b[k];
			}
		}
		
	
		printf("%d\n",b[k]);
	}
	return 0;

}