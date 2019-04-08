int main(){
	char a[500];
	int i,n,j,p;
	gets(a);
	for(n=2;n<=strlen(a);n++){
		for(i=0;i+n<=strlen(a);i++){
			p=1;
			for(j=i;j-i<=n-1;j++){
				if(a[j]==a[2*i+n-1-j]) p=p*1;
				else p=p*0;
			}
			if(p==1){
				for(j=i;j-i<=n-1;j++){
					printf("%c",a[j]);
				}	
				printf("\n");
			}
		}
	}
	return 0;
}