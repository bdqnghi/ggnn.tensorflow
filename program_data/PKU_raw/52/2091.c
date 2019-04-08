int main(){
	int n,m,a[100];
	int i,e,j,b;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		e=a[0];
		for(j=0;j<n-1;j++){
			b=a[j+1];
			a[j+1]=e;
			e=b;
		}
		a[0]=e;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
    printf("%d",a[n-1]);
	return 0;
}
