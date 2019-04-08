int main()
{
	int n,k;
	int a[1000];
	int i,j,e;
	int s=0,q=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){
			e=a[i]+a[j];
			if(e==k){
				s++;
			}
		}
	}
	if(s==0){
		printf("no");
	}
	else{
		printf("yes");
	}
	return 0;
}