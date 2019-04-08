int main(){
    int i,j,n;                 
	char zfc[256],jg[256];
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {   
        scanf("%s", zfc); 
			for (j = 0; zfc[j]!='\0'; j++){
			 if (zfc[j]=='A'){
				 jg[j]='T';
			 } else if(zfc[j]=='T'){
				 jg[j]='A';
			 } else if(zfc[j]=='C'){
				 jg[j]='G';
			 } else {
				 jg[j]='C';
			 } 
			}
			jg[j]='\0';
			printf("%s\n",jg);
		 }
  
    return 0;
}

