int main(){
	int n,m,i,e,k,a,sz[1000],js[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
}
	a=0;
	for(i=0;i<n;i++){
		if(sz[i]%2!=0){
			js[a]=sz[i];
			a++;}
	}
	for(k=1;k<=a;k++){
		m=0;
	for(i=0;i<=a-k;i++){
		if(js[i]>js[m]){
			m=i;
		}
	}
		if(js[m]!=js[a-k]){
			e=js[a-k];
			js[a-k]=js[m];
			js[m]=e;
		}
	}
	for(i=0;i<a;i++){
		if(i==a-1){printf("%d",js[i]);}
        else{printf("%d,",js[i]);}
}
	return 0;
	}
