int main()
{
	int n,k,i,m,x=0;
	scanf("%d",&n);
	for(m=3;m<=n-2;m=m+2)
	{
		for(i=3;i<=sqrt(m);i++)
			if(m%i==0)break;
	    if(i>sqrt(m))
		{
			for(k=3;k<=sqrt(m+2);k++)
				if((m+2)%k==0)break;
			if(k>sqrt(m+2))
			{printf("%d %d\n",m,m+2);
			x=1;}
		}
	}
	
	if(x==0)
		printf("empty\n");
	return 0;
}