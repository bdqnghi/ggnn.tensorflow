void main()
{
	int n,i,j,k=0,p,l=0;
	scanf("%d",&n);
	if(n<5)
		printf("empty");
 	for(i=2;i<n-1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			else
				k++;
		}
		if(k==i-2)
		{
			p=i+2;
			for(j=2;j<p;j++)
			{
			    if(p%j==0)
					break;
				else
					l++;
			}
			if(l==p-2)
				printf("%d %d\n",i,p);
		}
		k=0;l=0;
	}
	
}