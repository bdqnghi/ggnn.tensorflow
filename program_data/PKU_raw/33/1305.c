int main(){
	int n,i,k;
	char b[1000][1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char a[1000]={0};
		scanf("%s",a);
		for(k=0;a[k]!='\0';k++){
			if(a[k]=='A'){
				b[i][k]='T';
			}
			if(a[k]=='T'){
				b[i][k]='A';
			}
			if(a[k]=='C'){
				b[i][k]='G';
			}
			if(a[k]=='G'){
				b[i][k]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",b[i]);
	}
	return 0;
}