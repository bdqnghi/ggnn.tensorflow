int main()
{
	int point[8][8], n, m;
	int p, q, max, temp=0;
	int i, k;
	scanf("%d,%d",&n, &m);
	for(i=0;i<n;i++)
	{
		for(k=0;k<m;k++)
		{
			scanf("%d",&point[i][k]);
		}
	}

	for(i=0;i<n;i++)
	{
		max=point[i][0];
		p=i;
		q=0;
		for(k=0;k<m;k++)
		{
			if(point[i][k]>max)
			{
				max=point[i][k];
				q=k;
			}
		}

		for(k=0;k<n;k++)
		{
			if(point[k][q]<max)
			{
				temp=1;
				break;
			}
		}
		if(temp==1) continue;
		else 
		{
			printf("%d+%d",p, q);
			return 0;
		}
	}

	printf("No");
	return 0;
}
