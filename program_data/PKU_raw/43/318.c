int shisushu(int n);
int main(){
	int m,n;
	scanf("%d",&m);
	for(n=2;n<=m/2;n++){
		if(shisushu(n)==1){
			if(shisushu(m-n)==1){
				printf("%d %d\n",n,m-n);
			}
		}
	}
	return 0;
}
int shisushu(int n){
	int i;
	int result=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			result=0;
			break;
		}
	}
	return result;
}