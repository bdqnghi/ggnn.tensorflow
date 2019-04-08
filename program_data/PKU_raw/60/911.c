int main(){
	int n,i,j,a=3;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}

		if(j==i){
			if(i-a==2){
			printf("%d %d\n",a,i);
			};
			a=i;
		}
	}
	if(a==3){
	printf("empty");
	}
	return 0;
}