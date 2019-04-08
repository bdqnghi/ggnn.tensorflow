void main()
{
	int n,i,j,k,l,m;
	scanf("%d",&n);
	if(n==1) {printf("End");exit(1);}
	while (n!=1)
	{
		if (n%2==0) {k=n/2;printf("%d/2=%d\n",n,k);n=k;}
		else {k=n*3+1;printf("%d*3+1=%d\n",n,k);n=k;}
	}
	printf("End");
}