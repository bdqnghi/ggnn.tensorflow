
void main()
{
	int n, m;
	int i, j, k=0, l;
	int flag=0;
	int a=0;
	int f=0;
	int ju[8][8]={0};
	int andian[8][2]={-1};
	scanf("%d,%d", &n, &m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d", &ju[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		a=ju[i][0];
		for(j=1;j<m;j++)
		{			
			if(ju[i][j]>a)
			{
				a=ju[i][j];
				k=j;
			}
			else
				continue;
		}
			for(l=0;l<n;l++)
			{
				if(a<=ju[l][k])
					continue;
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				andian[i][0]=i;
				andian[i][1]=k;
			}
			else
			{
				break;
			}
	}
	if(andian[0][0]>=0&&andian[0][1]>=0)
	{
		printf("%d+%d\n", andian[0][0], andian[0][1]);
		f++;
	}
	for(i=1;i<n;i++)
	{
		if(andian[i][0]>0||andian[i][1]>0)
		{
			printf("%d+%d\n", andian[i][0], andian[i][1]);
			f++;
		}
		else
			continue;
	}
	if(f==0)
		printf("No");
}