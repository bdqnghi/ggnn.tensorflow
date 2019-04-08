int main(){
	char k[1000];
    int i,n,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(k);
        for(j=0;k[j]!='\0';j++){
			if(k[j]=='A') printf("T");
			else if(k[j]=='T') printf("A");
			else if(k[j]=='C') printf("G");
			else if(k[j]=='G') printf("C");
		}
		if(k[j]=='\0') printf("\n");
	}
    return 0;

}
