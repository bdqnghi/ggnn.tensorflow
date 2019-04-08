int main()
{
	int m,n,i,j,num[100][100];
	int flag = -1;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &num[i][j]);
		}
		//num[i][n] = -10;

	}

	//for(j = 0; j<=n; j++)
	//{
		//num[m][j] = -10;
	//}


	i = 0;
	j = 0;
	flag = 1;
	while(1)
	{
		if(num[i][j] != -10)
		{
			printf("%d\n", num[i][j]);
			num[i][j] = -10;
		}
		else
		{
			break;
		}
		
		if(flag == 1)
		{
			if(j+1<n && num[i][j+1] != -10)
			{
				j++;
			}
			else if(i+1 <m )
			{
				i++;
				flag = 2;
			}
		}
		else if(flag == 2)
		{
			if(i+1<m && num[i+1][j] != -10)
			{
				i++;
			}
			else if(j-1 >=0)
			{
				j--;
				flag = 3;
			}
		}
		else if(flag == 3)
		{
			if(j-1>=0 &&  num[i][j-1] != -10)
			{
				j--;
			}
			else if(i-1 >=0 )
			{
				i--;
				flag = 4;
			}
		}
		else if (flag ==4)
		{
			if( i-1>=0 && num[i-1][j] != -10)
			{
				i--;
			}
			else if(j+1 <n)
			{
				j++;
				flag = 1;
			}
		}
		
	}
	
	return 0;
}
