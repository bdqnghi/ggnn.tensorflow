int main()
{
	int i,j,k,n=0,m,a[100][100],b[100]={0};
	for(i=0;;i++)
	{
		scanf("%d",&a[n][0]);
		if(a[n][0]==-1)
			break;
		for(j=1;;j++)
		{
		    scanf("%d",&a[n][j]);
		    if(a[n][j]==0)
			{
	            m=j;
				break;
			}
		}
		for(j=0;j<m;j++)
		{
			for(k=0;k<m;k++)
			{
				if(a[n][j]==2*a[n][k])
					b[n]++;
			}
		}
		printf("%d\n",b[n]);
		n++;
	}
	return 0;
}