int main()
{
	int a[10000]={0};
	int n,c,i=0,j=0;
	scanf("%d",&n);
	scanf("%d",&c);
	a[0]=c;	
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		scanf("%d ",&c);
		a[i]=c;
		for(j=0;j<=i-1;j++){
			if(c==a[j]) a[i]=0;}
			if(a[i]!=0) printf(" %d",a[i]);
	}
	return 0;
}