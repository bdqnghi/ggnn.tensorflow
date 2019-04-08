int main(){
	int n,k,a[1000],i,x,s;
	s=1;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(x=1;x<=n-1-i;x++){
			if(a[i]+a[i+x]==k){
				s=s*0;
			}
		}
	}
	if(s==0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}