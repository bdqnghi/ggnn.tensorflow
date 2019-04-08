main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{	printf("%d=",i);
		for(j=3;j<=i/2;j=j+2)
		{	for(k=3;k<=sqrt(i);k=k+2)
			{	if(j%k==0&&j!=k) 
				break;
				else if((i-j)%k==0&&(i-j)!=k)
				break;
			}
			if(k>=sqrt(i)) 
			{	printf("%d+%d\n",j,i-j);
				break;
			}
		}
	}
}