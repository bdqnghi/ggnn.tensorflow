

int main()
{
	int i,j,k,m,n,sum=0;
	int a[20][20],b[20];
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1)
			{
				m=i;
				break;
			}
			if(a[i][j]==0)
			{
				b[i]=j;
				break;
			}
			
			
		}
		if(a[i][j]==-1)
		{
			break;
		}
		

	}



	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<b[i];j++)
		{
			for(k=0;k<=j;k++)
			{
				if(a[i][j]%a[i][k]==0&&a[i][j]/a[i][k]==2)
					sum++;
				else if(a[i][k]%a[i][j]==0&&a[i][k]/a[i][j]==2)
					sum++;
			}
			
		}
		printf("%d\n",sum);
	}
	return 0;
}