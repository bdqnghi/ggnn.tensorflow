int main(){
	int n;
	int a[10000];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i<n-1){
			scanf("%d ",&a[i]);
		}
		else{
			scanf("%d",&a[i]);
		}
	}
	for(i=n-1;i>=0;i--){
		if(i>0){
			printf("%d ",a[i]);
		}
		else{
			printf("%d",a[i]);
		}
	}
	return 0;
}