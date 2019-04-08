void main()
{
	int n,i,p,j,k=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		p=0;
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
				p++;

		}
		if(p==i-2)
		{
			if(i+2<=n)
			{
			    p=0;
			    for(j=2;j<i+2;j++)
				{
				   if((i+2)%j!=0)
					   p++;
				}
		    	if(p==i)
				{
			    	printf("%d %d\n",i,i+2);
			          k++;
				}
			}
		}
	}
	if(k==0)
		printf("empty");


}