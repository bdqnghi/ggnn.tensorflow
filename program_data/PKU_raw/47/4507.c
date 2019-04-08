int main(){
	int a[100];
	int b[100];
	int n,i,j;
	
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	j=n-1;
	if(n<=1||n>=100){
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			b[j]=a[i];
			j=j-1;
		}
		for(j=0;j<n-1;j++){
	       printf("%d ",b[j]);
		}
		printf("%d",b[n-1]);
	}
	return 0;
}


