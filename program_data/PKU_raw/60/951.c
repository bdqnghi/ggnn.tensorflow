int main(){
	int n,i,j,k;
	scanf("%d",&n);
	if(n<5){
		printf("empty");
	}
	else{
		for(i=4;i<=n;i++){
			for(j=2;j<i;j++){
				if(i%j==0){
					break;
				}
			}
			if(j==i){
				for(k=2;k<i-2;k++){
					if((i-2)%k==0){
						break;
					}
				}
				if(k==i-2){
					printf("%d %d\n",i-2,i);
				}
			}
		}
	}
	return 0;
}
