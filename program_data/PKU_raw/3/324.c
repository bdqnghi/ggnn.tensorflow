int main()
{
    int a[1000],n,k,i=0,j=0;
    scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]+a[j]==k){
				printf("yes");
				return 0;
			}
		}
	}
    printf("no");
	return 0;
}
