
int factorize(int n,int j)
{	
	int F=1;
	for(;j<=sqrt(n);j++)
		if(n%j==0)
			F+=factorize(n/j,j);
	return F; 
}
int main()
{
	int i,m,n[1000];
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&n[i]);
	for(i=0;i<m;i++)
		printf("%d\n",factorize(n[i],2));
	return 0;
}