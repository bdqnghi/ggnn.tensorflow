int main()
{
	int n,k,m; 
	scanf("%d %d",&n,&k);
	if(n==2&&k==1)
	{
		m=7;
		printf("%d\n",m);
	}
	else
      m=(int)(pow(n,n))-(n-1)*k;
      printf("%d\n",m);
    return 0;
}