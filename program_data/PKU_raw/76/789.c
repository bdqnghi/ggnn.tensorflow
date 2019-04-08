int main()
{
	int i,j,k,m,n,qj[60000]={0},p=0,q=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d",&m,&n);
		for(j=(2*m-1);j<=(2*n-1);j++)
		{
			qj[j]=1;
		}
	}
	for(i=1;i<51000;i++)
	{
		if(qj[i]==1&&qj[i+1]==0)
		{
			for(j=i+1;j<51000;j++)
			{
				if(qj[j]==0&&qj[j+1]==1)
				{
					printf("no");
					return 0;
				}
			}
		}
	}
	for(i=1;i<51000;i++)
	{
		if(qj[i-1]==0&&qj[i]==1)
		{
			p=(i+1)/2;
		}
		else if(qj[i]==1&&qj[i+1]==0)
		{
			q=(i+1)/2;
		}
	}
	printf("%d %d",p,q);
	return 0;
}
