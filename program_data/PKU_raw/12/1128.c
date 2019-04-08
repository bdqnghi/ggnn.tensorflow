int main()
{
	int a[100][100];int count=0;int i,j,k,m;
	for(m=0;;m++)
	{
		scanf("%d",&a[m][0]);
		if(a[m][0]==-1)
			break;
		else
		{
			for(i=1;;i++)
			{
				scanf(" %d",&a[m][i]);
				if(a[m][i]==0)
					break;
			}
		}
		for(j=0;j<i;j++)
		{
			for(k=j+1;k<i;k++)
			{
				if((a[m][j]==2*a[m][k])||(a[m][j]*2==a[m][k]))
					count=count+1;
			}
		}
		printf("%d\n",count);count=0;
	}

return 0;
}



