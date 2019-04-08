
int main(){
	int a[100]={0};
	int i,j,t,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n-j;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("%d\n%d",a[n],a[n-1]);
	return 0;
}