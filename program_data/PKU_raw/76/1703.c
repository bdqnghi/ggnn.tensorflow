int main(){
	int a[10000],b[10000],c[10000]={0},i,k,m,n,p,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<b[i])
			for(k=a[i];k<b[i];k++){
				c[k]=1;
			}
	}
	for(m=1;m<=9999;m++){
		if(c[m]==1){
			x=m;
			break;}
	}
	for(m=9999;m>=1;m--){
		if(c[m]==1){
			p=m;
			break;}
	}
	for(i=x;i<=p;i++){
		if(c[i]==0){
			printf("no");
			break;}
	}
	if(i==p+1){
        printf("%d %d",x,p+1);}
	return 0;
}
