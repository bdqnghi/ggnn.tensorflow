int main()
{
	int n,a[300],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
		for(j=0;j<=i-1;j++)
			if(a[i]==a[j]) a[i]=1000000;
	for(i=0;i<n;i++)
		if(a[i]!=1000000) k=i;
	for(i=0;i<k;i++)
		if(a[i]!=1000000) printf("%d,",a[i]);
   printf("%d",a[k]);
	
}