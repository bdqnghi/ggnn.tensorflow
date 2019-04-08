int main(){
	int i,n;
	int h[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&(h[i]));
	}
	for(i=n;i>0;i--){
		if(i==1){
			printf("%d",h[1]);
		}else{
		printf("%d ",h[i]);
		}
	}
	return 0;
}
	