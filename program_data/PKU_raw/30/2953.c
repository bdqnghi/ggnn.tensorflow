int yu7wuguan(int i);
int main() {
    int n,i,x;
	int s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(yu7wuguan(i)){
			s+=i*i;
		}
	}
	printf("%d",s);
	return 0;
}
int yu7wuguan(int num){
	if(num%7==0){
		return 0;
	}
	for(int n=num;n>0;n/=10){
		if(n%10==7){
			return 0;
		}
	}
	return 1;
}
