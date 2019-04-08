int main(){
    int n,i=0;
	scanf("%d",&n);
	int a[100],s=n-1;
	for(i=0;i<n-1;i++){
		scanf("%d \n",&a[i]);
	}
	scanf("%d",&a[n-1]);
	for(s=n-1;s>0;s--){
		printf("%d ",a[s]);
	}
	printf("%d",a[0]);
	return 0;
}
