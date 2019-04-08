int yu7wuguan (int n);
int main(){
	int result=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(yu7wuguan(i)){
			result+=i*i;
		}
	}
	printf("%d",result);
	return 0;
}
int yu7wuguan(int n){
	if (n%7==0){
		return 0;
	}
	if(n==71||n==72||n==73||n==74||n==75||n==76||n==78||n==79){
		return 0;
	}
		if(n%10==7){
			return 0;
	}
	return 1;
}