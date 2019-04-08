int main()
{
	int n,k,t,i,a[1000];
	int s=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		for(t=i+1;t<=n-1;t++){
			if((a[i]+a[t])==k){
				s+=1;
			}else{
				s+=0;
			}
		}
	}
	if(s==0){
		printf("no");
	}else{
		printf("yes");
	}
	return 0;
}
