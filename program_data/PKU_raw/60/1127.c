int sushu(int n);
int main(){
	int n,i;
	scanf("%d",&n);
	if(n<5){
		printf("empty");
	}else{
	for(i=2;i<=n-2;i++){
		if(sushu(i)==1&&sushu(i+2)==1){
			printf("%d %d\n",i,i+2);
		}
	}
	}
		return 0;
	}

	int sushu(int x){
		int i;
		if(x==2){
			return 1;
		}else{
		for(i=2;i<x;i++){
			if(x%i==0){
				return 0;
			}
		}
		return 1;
		}
	}

