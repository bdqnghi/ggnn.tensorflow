int main()
{
	int n,s[100],sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	sum=n;
	for(int j=1;j<n;j++){
		printf("%d ",s[sum-j]);	
	}
	printf("%d",s[0]);
	return 0;
}