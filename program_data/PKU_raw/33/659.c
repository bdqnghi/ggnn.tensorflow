int main(){
	char zfc[256],*ps;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char e[256]={0};
	    scanf("%s",zfc);
		for(ps=zfc;*ps!='\0';ps++){
			if(*ps=='A'){
				strcat(e,"T");
			}else if(*ps=='T'){
				strcat(e,"A");
			}else if(*ps=='G'){
                strcat(e,"C");
			}else{
				strcat(e,"G");
			}
		}
	
		printf("%s\n",e);
	}
return 0;
}