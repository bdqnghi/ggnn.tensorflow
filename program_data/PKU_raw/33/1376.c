int main(){
	char yl[10000][256],pdl[10000][256];
	int i=0,j=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",yl[i]);}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(yl[i]);j++){
			if(yl[i][j]=='A'){ 
				pdl[i][j]='T';   }
		    if(yl[i][j]=='T'){ 
				pdl[i][j]='A';  }
		    if(yl[i][j]=='C'){
				pdl[i][j]='G';   }
			if(yl[i][j]=='G'){ 
				pdl[i][j]='C';}
		}
	}
	 for(i=0;i<n;i++){ 
		 for(j=0;j<strlen(yl[i]);j++){ 
			 printf("%c",pdl[i][j]);  } 
		 printf("\n");
	 }
	return 0;
}