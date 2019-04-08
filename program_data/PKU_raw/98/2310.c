
main(){
	struct word{
		char a[41];
		int l;
	};
	struct word w[10000];
	int n, i, sum;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", w[i].a);
		w[i].l=strlen(w[i].a);
	}
	for(i=n; i==n; i++) w[i].l=0;
	sum=0;
	for(i=0; i<n; i++){
		sum+=w[i].l+1;
		if(sum+w[i+1].l<81){
			if(i==n-1) printf("%s", w[i].a);
			else  printf("%s ", w[i].a);
		}
		else{
			if(i==n-1) printf("%s", w[i].a);
			else {
				printf("%s\n", w[i].a);
				sum=0;
			}
		}
	}
}
