int a[100000];
int main(){
	int n=0,i=0,k=0,b=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d\n",&a[n-1]);
	scanf("%d",&k);
	for(i=0;i<=n-1;i++){
		if(a[i]!=k){
			if(b==0){
			  printf("%d",a[i]);
			  b+=1;
		    }
		    else{
		    	printf(" %d",a[i]);
		    }
		}
	}
	printf("\n");
	return 0;
} 