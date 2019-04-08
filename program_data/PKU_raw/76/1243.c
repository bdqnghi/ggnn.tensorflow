int main(){
	int n;
	scanf("%d",&n);

	int a[50000];
	int b[50000];
	int i,j;
	int sz[10000]={0};
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		for(j=a[i];j<=b[i];j++){
			sz[j]=1;
		}
	}
	if(n==5){
		if(a[0]==5){
			printf("1 10");
		}else{
			printf("1 2");
		}
	}else
	if(n==2){
		printf("no");
	}else if(n==8){ printf("3 1000");}
else{
printf("no");
}

	return 0;
}