int main()
{
	int n,i,j,a,b,k,c=0;
	scanf("%d",&n);
	for(i=3;i<=(n-2);i+=2)
	{
	    a=sqrt(i);
		b=sqrt(i+2);
		for(j=2;j<=a;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		for(k=2;k<=b;k++)
		{
			if((i+2)%k==0)
			{
				break;
			}
		}
		if(j==(a+1)&&k==(b+1))
		{
			c++;
			printf("%d %d\n",i,i+2);
		}
	}
	if(c==0||(n<=1&&n<=4))
	{
		printf("empty");
	}
	return 0;
}

		




		

	
	
