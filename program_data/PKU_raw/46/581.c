void spread(int A[100][100],int M,int N)
{
	int i;
	int j=0;
	int t[400]={0};
	if(M==1&&N==1)
		printf("%d\n",A[0][0]);
	else
	{
		if(M==1)
			for(i=0;i<N;i++)
			{
			   t[j]=A[0][i];
			   j=j+1;
			}
			else if(N==1)
				for(i=0;i<M;i++)
				{
					t[j]=A[i][0];
				     j=j+1;
				}
			    else
				{
	                for(i=0;i<N-1;i++)
					{
	            	   t[j]=A[0][i];
		               j=j+1;
					}
	                for(i=0;i<M-1;i++)
					{
		               t[j]=A[i][N-1];
		               j=j+1;
					}
	                for(i=N-1;i>0;i--)
					{
		               t[j]=A[M-1][i];
		               j=j+1;
					}
	                for(i=M-1;i>0;i--)
					{
		               t[j]=A[i][0];
		               j=j+1;
					}
				}
	for(i=0;i<j;i++)
		printf("%d\n",t[i]);
	}
}
void main()
{
	int i,j,s;
	int r,c;
	int k;
	int a[100][100];
	scanf("%d%d",&r,&c);
	k=r<c?r:c;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		for(i=1;((r>0)&&(c>0));i++)
		{
			spread(a,r,c);
			r=r-2;
			c=c-2;
			for(s=0;s<r;s++)
				for(j=0;j<c;j++)
					a[s][j]=a[s+1][j+1];
		}
}