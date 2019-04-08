void main()
{
	int n,k,i,j,a[1005],ans=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				ans=1;
				break;
			}
		}
	}
	printf("%s\n",ans?"yes":"no");
}