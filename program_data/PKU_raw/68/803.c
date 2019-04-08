void main()
{

	int n,i,j,k,a,b;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i;j=j+2)
		{
			a=0;
			b=0;
			for(k=3;k<=sqrt(j);k=k+2)
				if(j%k==0)
				{
					a=1;
					break;
				}
			for(k=3;k<=sqrt(i-j);k=k+2)
				if((i-j)%k==0)
				{
					b=1;
					break;
				}
			if(a==0&&b==0)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
		
	}
}