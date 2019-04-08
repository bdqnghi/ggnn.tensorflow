int main(){
	int n,a[200],b[200],i,e,t;
	scanf("%d",&n);
	e=0;
	t=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			e++;
		}
	}
	for(i=0;i<n;i++){
		if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			t++;
		}
	}
	if(e==t){
		printf("Tie");
	}else if(e>t){
		printf("A");
	}else{
		printf("B");
	}
	return 0;
}