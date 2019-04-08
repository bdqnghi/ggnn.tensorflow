int jiaogu(int n)
{	
	if(n%2==1)
	{
		n=n*3+1;	
	}
	else
	{
		n=n/2;		
	}
	return(n);
}
void main()
{
	int jiaogu(int n);
	int n;
	scanf("%d",&n);
	if(n==1) printf("End");
	else{
	while(jiaogu(n)!=1)
	{	
		int k;
		k=n;
		if(n%2==1) printf("%d*3+1=%d\n",k,jiaogu(n));
		else printf("%d/2=%d\n",k,jiaogu(n));
		n=jiaogu(n);
	}
	printf("2/2=1\n");
	printf("End");}
}