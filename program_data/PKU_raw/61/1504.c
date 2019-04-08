int f(int k);
int main(){
	int s[1000],i,n,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&s[i]);
		k=s[i];
		printf("%d\n",f(k));
	}
	return 0;
}
int f(int k){
	if(k==1||k==2){
		return 1;
	}else{
		return f(k-1)+f(k-2);
	}
}