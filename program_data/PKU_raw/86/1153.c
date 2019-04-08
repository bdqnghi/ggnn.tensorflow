void main()
{
	int n,i,j,m,k,y,w;
	int a[100][60],sum[100][60];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		if(m==0)
			printf("60\n");
		else
		{
			for(k=0;k<m;k++)
			{
				sum[i][k]=a[i][k]+3*k;
				if(sum[i][k]>=57)
				{
					w=60-sum[i][k];
					if(w<0)
					{
						printf("%d\n",60-3*k);
					    break;
					}
					else
					{
						printf("%d\n",60-3*k-w);
						break;
					}

				}
				else
					if(k==m-1)
						printf("%d\n",60-(k+1)*3);
					
				
			}
			
		}
	}
}

				
					
