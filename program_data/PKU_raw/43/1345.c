int main()
{
 int n,j,i;
 char isprime[MAXN+1]={0,0};
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
	 isprime[i]=1;
 }
 for(i=2;i<=n/2;i++)
 {
	 if(isprime[i])
	 {
		 for(j=i+i;j<=n;j+=i)
		 {
			 isprime[j]=0;
	 }
 }
 }

	for(j=2;j<=n/2;j++)
	{
		if(isprime[j]&&isprime[n-j])
		{
			printf("%d %d\n",j,n-j);
		}
	}


return 0;
}
