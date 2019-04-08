int main(){
	int n,i,k=0,p;
	scanf("%d",&n);
	int a[1000000],b[1000000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	'\n';
	scanf("%d",&p);
	for(i=0;i<n;i++){
		if(a[i]!=p){
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++){
		printf("%d ",b[i]);
	}
	printf("%d",b[k-1]);
	return 0;
}