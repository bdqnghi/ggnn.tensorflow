int main(){
	int n,i,j;
	char a[256],b[256];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='A'){
				printf("T");
			}
			if(a[j]=='T'){
				printf("A");
			}
			if(a[j]=='C'){
				printf("G");
			}
			if(a[j]=='G'){
				printf("C");
			}
		}
		printf("\n");
	}


	return 0;
}
