int main()
{
	int n,k,a[1000],i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				printf("yes");
				break;
			} 
		}
		if(j!=n){
			break;
		}else if(j==n&&a[i]+a[j-1]==k){
		break;
		}else if(i==n-1&&a[i]+a[j-1]!=k){
		printf("no");
		}
	}
			
    return 0;
}