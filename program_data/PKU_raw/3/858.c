int main()
{
	int n,k,a[1000],i,b[1000],j,c=0,d=0;
    scanf("%d%d",&n,&k);
	for(i=0,j=0;i<n,j<n;i++,j++)
	{
    	scanf("%d",&a[i]);
		b[j]=k-a[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(b[j]==a[i])
			{
				c=1;
				printf("yes");
				d=1;
				break;
			}
		}
		if(d==1)
		{
			break;
		}
	}
	if(c==0)
	{
		printf("no");
	}
	return 0;
}
