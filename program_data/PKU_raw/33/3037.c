int main(){
	int i,n,j;
    char a[256];
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(a);
		for(j=0;j<strlen(a);j++){
			if(a[j]=='A'||a[j]=='T'){
				if(a[j]=='T'){
					a[j]='A';}
				else{
			        a[j]='T';}
			}
			if(a[j]=='G'||a[j]=='C'){
				if(a[j]=='C'){
					a[j]='G';}
				else{
			        a[j]='C';}
			}
		}
	    printf("%s\n",a);
	}
	return 0;
}