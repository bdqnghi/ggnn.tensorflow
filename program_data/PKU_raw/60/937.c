int is_sushu(int i);
int main(){
	int n,s=0;
	scanf("%d",&n);	
		for(int i=2;i<=n-2;i++){
			if(is_sushu(i)&&is_sushu(i+2)){
				printf("%d %d\n",i,i+2);
				s++;
			}
		}
		if(s==0)
			printf("empty");
return 0;
}
int is_sushu(int i){
	int p,q=0;
	for(p=2;p<=i;p++){
		if(i%p==0)
			q++;
	}
	if(q==1){
		return 1;
	}
return 0;
}