int outcome(int n)
{
	int t;
	if (n%2==0)
		t=n/2;
	else t=3*n+1;
	return (t);
}
void main()
{
	int n,t,i;
	scanf("%d",&n);
	t=n;
	for(i=0;t!=1;i++)
	{
	    if (t%2==0)
			printf("%d/2=%d\n",t,outcome(t));
		else
		    printf("%d*3+1=%d\n",t,outcome(t));
		t=outcome(t);
	}

	printf("End");
}