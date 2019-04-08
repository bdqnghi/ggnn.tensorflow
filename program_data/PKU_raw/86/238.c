int main()
{
	int n,i,m[20],j,x[20][20];
	int sum[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&m[i]);
		if(m[i]>0)
		{
			for(j=0;j<m[i];j++)
			{
				scanf("%d",&x[i][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(m[i]==0){sum[i]=60;}
		else{
			if(x[i][m[i]-1]+3*m[i]<60){sum[i]=60-3*m[i];}
			else{
				for(j=0;j<m[i];j++)
				{
					if(x[i][j]+3*j>60){sum[i]=60-3*j;
					break;}
					if(x[i][j]+3*j<=60&&x[i][j]+3*j+3>=60)
					{sum[i]=x[i][j];
					break;}
				}
			}
		}
		printf("%d\n",sum[i]);
	}
	return 0;
}