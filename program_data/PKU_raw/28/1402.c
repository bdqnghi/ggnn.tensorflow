int main()
{
	char sent[5000];
	gets(sent);
	
	char word[601][15];

	int lsent=strlen(sent);
	int i=0,t=0,k,l;
	while(i<=lsent){
		if(sent[i]=='\0'){
				break;
		}
		for(k=0;k+i<=lsent;k++){
		
		     if(sent[i+k]!=' '&&sent[i+k]!='\0'){
			       word[t][k]=sent[i+k];
			 }else{
			       word[t][k]='\0';
				   i+=strlen(word[t]);
			       t++;
				   
		       	   break;
			 }
		}
		i++;

	}
	int e;
	for(l=0;l<t;l++){
		e=strlen(word[l]);
		if(l==0){
			if(e!=0){
			printf("%d",e);
			}
		}else{
			if(e!=0){
			printf(",%d",e);
			}
		}
	}
	return 0;
}