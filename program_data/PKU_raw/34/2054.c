int main()
{
	int n,m;
	scanf("%d",&n);
	while(1)
	{
		if(n==1)
		{
			printf("End");
			break;
		}
		if(n%2==0)
		{
			m=n/2;
			printf("%d/2=%d\n",n,m);
			n=m;
			if(n==1)
		    {
			    printf("End");
			    break;
		    }
		}
		if(n%2==1)
		{
			m=n*3+1;
			printf("%d*3+1=%d\n",n,m);
			n=m;
			if(n==1)
		    {
			    printf("End");
			    break;
		    }
		}
	}
	scanf("%d",1);
	return 0;
}