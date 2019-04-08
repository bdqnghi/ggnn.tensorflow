int main(){
	char zfc[256],dy[256]={0};
	int i,n,l,j;
	char sz;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc);
		l=strlen(zfc);
		for(j=0;j<l;j++){
			if(zfc[j]=='A'){
				 sz='T';
			}else if(zfc[j]=='T'){
				 sz='A';
			}else if(zfc[j]=='C'){
				 sz='G';
			}else if(zfc[j]=='G'){
				 sz='C';
			}
			dy[j]=sz;
		}
		for(j=0;j<=l-1;j++){
				printf("%c",dy[j]);
		}
		printf("\n");
	}
				


	return 0;
}
