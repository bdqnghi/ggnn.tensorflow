int main()
{
	int n,k,i,j,l,w;
	int a[1000];
	scanf("%d %d",&n,&k);
	if(n<=0) printf("no");
	l=0;
	i=0;
	while(l<=n-1)
	{
		scanf("%d",&a[l]);
		l++;
	}
	while(i<n-1)
	{
		j=n-1;
		while(j>i)
		{
			w=a[i]+a[j];
			j--;
			if(w==k) {printf("yes");break;}
		}
		if(w==k) {break;}
		i++;
	}
	if(i==n-1) printf("no");

	return 0;
}
