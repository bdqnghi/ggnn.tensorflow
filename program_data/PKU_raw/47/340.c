int main(){
	int n,i,k,t;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n-1;i++){
		scanf("%d ",&a[i]);
	}
	if(i=n-1){
		scanf("%d",&a[i]);
	}
	int e;
	for(k=1;k<n/2+1;k++){
		e=a[n-k];
		a[n-k]=a[k-1];
		a[k-1]=e;
	}
	for(t=0;t<n-1;t++){
		printf("%d ",a[t]);
	}
	if(t=n-1){
		printf("%d",a[t]);
	}			
	return 0;
}