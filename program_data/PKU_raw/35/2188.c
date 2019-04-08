int main()
{
	int x[9][9],m,n,i,j,max[9]={0},r[9];
	char z='0';
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
			if(x[i][j]>=max[i])
			{max[i]=x[i][j];
			r[i]=j;
			}
		}
	}
		for(i=0;i<m;i++)
		{
		for(j=0;j<m;j++)
		{
			if(x[j][r[i]]<max[i])
				break;
		}
		if(j==m)	
		{
			z='1';
			printf("%d+%d",i,r[i]);
			break;
		}
	}
	if(z=='0')
		printf("No");
}

