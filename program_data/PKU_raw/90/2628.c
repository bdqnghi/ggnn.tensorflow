
int means(int m,int n)
{
	if(n==1)
		return 1;
	else{
		if(m==0)
			return 1;
		else{
			if(m>=n)
				return means(m,n-1)+means(m-n,n);
			else
				return means(m,n-1);
		}
	}
}

void main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		printf("%d\n",means(m,n) );
	}
}