void main()
{
	int bb(int n);
    int n;
    scanf("%d",&n);
    bb(n);
}
int bb(int n)
{
	int m;
	if(n==1)
    printf("End");
    else
    {
    	if(n%2==0)
    	{
    		printf("%d/2=%d\n",n,m=n/2);
    	}
    	else
    	{
    		printf("%d*3+1=%d\n",n,m=n*3+1);
    	}
    	bb(m);
    }
}