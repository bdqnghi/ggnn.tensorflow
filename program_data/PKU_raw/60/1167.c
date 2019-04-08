int main(){
	int n,i,t,j;
	scanf("%d",&n);
	if(n<=4){
		printf("empty");
	}
	for(i=3;i<=n-2;i++){
		t=i+2;
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			for(j=2;j<t;j++){
				if(t%j==0){
				break;
				}
			}
			if(t==j){
				printf("%d %d\n",i,t);
			}
		}
	}
	return 0;
}