int f(int m,int n)
{
	if(n<=0)
	return 0;
	if(n==1)
	return 1;
	if(m<n)
	return f(m,n-1);
	return f(m,n-1)+f(m-n,n); 
	
}
int main()
{
	int m[20],n[20],t,i,k[20];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
		k[i]=f(m[i],n[i]);
	}
	for(i=0;i<t;i++)
	printf("%d\n",k[i]);
	return 0;
}