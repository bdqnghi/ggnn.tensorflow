int main()
{
	int k,i,j,a[1000][1000],m[2],n[2],S,f;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	f=-1;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i][j]==0&&f==-1)
			{
				m[0]=i+1;
				n[0]=j+1;
				f=1;
			}
			if(a[i][j]==0)
			{
				m[1]=i-1;
				n[1]=j-1;
			}
		}
	}
	S=(m[1]-m[0]+1)*(n[1]-n[0]+1);
	printf("%d\n",S);
	return 0;
}
