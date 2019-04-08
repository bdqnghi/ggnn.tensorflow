void main()
{
	int a[100][16]={0},b[100]={0},n[100]={0},i,j,k;
	int m=0;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i][0]);
		if(a[i][0]==-1)
		{
			break;
		}
		if(a[i][0]!=-1)
		{
            m=m+1;
			n[i]++;
			for(j=1;j<16;j++)
			{
				scanf("%d",&a[i][j]);
				if(a[i][j]!=0)
				{
					n[i]=n[i]+1;
				}
				if(a[i][j]==0)
				{
				    break;	
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
			for(j=0;j<n[i];j++)
			{
				for(k=0;k<n[i];k++)
				{
					if(a[i][j]==2*a[i][k])
					{
						b[i]=b[i]+1;
					}
				}
			}
		
	}
    for(i=0;i<m;i++)
	{

			printf("%d\n",b[i]);
	}
}

