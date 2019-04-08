int prime(int x){  //????????
	int i;
	if(x==2)
		return 1;
	for(i=3;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
void main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		for(j=3;j<=i/2;j+=2){
			if(prime(j) && prime(i-j)){
				printf("%d=%d+%d\n",i,j,(i-j));
				break;
			}
		}
	}
}

