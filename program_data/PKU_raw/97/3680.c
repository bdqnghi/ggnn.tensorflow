int main()
{
	int n,m=0,a[6]={0},b[6]={100,50,20,10,5,1},i,j;
	scanf("%d",&n);
    for(j=0;j<6;j++)
	{
		for(i=0;m<n-b[j]+1;i++)
		{
			m=m+b[j];
			a[j]++;
		}
	}
	
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

