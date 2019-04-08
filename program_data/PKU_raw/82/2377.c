int main()
{
	int i,n,xy[100][2],m,z=0,k[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&xy[i][0],&xy[i][1]);
	}
	for(i=0;i<n;i++)
	{
		if((xy[i][0]<=140&&xy[i][0]>=90)&&(xy[i][1]<=90&&xy[i][1]>=60))
		{
			z++;
			k[i]=z;
        }
		else
        {
			z=0;
			k[i]=z;
		}
	}
	int e;
	for(m=1;m<n;m++)
	{
		for(i=0;i<n-m;i++)
		{
			if(k[i]>k[i+1])
			{
				e=k[i+1];
				k[i+1]=k[i];
				k[i]=e;
			}
		}
	}
	printf("%d",k[n-1]);
	
	return 0;
}