int main()
{
	int n,i,j,sum=0,len=0,final;
	unsigned short a[500][500];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]==0)
				sum++;
		}
    for (i=0;i<n&&len==0;i++)
		for (j=0;j<n;j++)
		{
			if (a[i][j]==0)
				len++;
		}
	final=(sum-2*len)/2*(len-2);
	printf("%d\n",final);
	return 0;
}
			
