int main()
{
	int n,k,m[1000],i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(m[i]+m[j]==k)
				break;
			if(j!=n)
				break;
	}
	if(i==n)
		printf("no");
		else
		printf("yes");
		return 0;
}

			

		


	
	


