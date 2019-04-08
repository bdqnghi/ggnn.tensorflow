void main()
{
	int jisuan(int a);
	int n,z;
	scanf("%d",&n);
	if(n==1)
		printf("End\n");
	else
	{
	z=jisuan(n);
	while(z!=1)
		z=jisuan(z);
	if(z==1)
		printf("End\n");
	}
}
int jisuan(int a)
{
	int T;
	if(a%2==0)
	{T=a/2;
	printf("%d/2=%d\n",a,T);}
	else 
	{T=a*3+1;
	printf("%d*3+1=%d\n",a,T);}
	return(T);
}