int main()
{
	int fib[10000];
	double sz[10000],ans;
	int m,n,i,j;
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%d",&n);
		fib[0]=1;
		fib[1]=1;
		for(i=2;i<n+2;i++){
			fib[i]=fib[i-1]+fib[i-2];
		}
		ans=0;
		for(i=0;i<n;i++){
			sz[i]=(double)fib[i+2]/(double)fib[i+1];
			ans=ans+sz[i];
		}
		printf("%.3lf\n",ans);
	}
	return 0;
}
