int main(){
	int b[100],a[100],i=0,n,j=0;
	scanf("%d\n",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		b[i]=a[n-i-1];
		printf("%d ",b[i]);
	}
         if(i=n-1){
          b[i]=a[0];
          printf("%d",b[i]);
        }
	return 0;

}
