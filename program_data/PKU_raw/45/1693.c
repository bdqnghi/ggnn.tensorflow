int main(){
	char s[50],w[50];
	int i,j,k,m;
    scanf("%s%s",s,w);
    m=strlen(s)+1;
	char *n;
	n=(char*)malloc(sizeof(char)*m);

    for(i=0;i<strlen(w);i++){
		if(w[i]==s[0]){
			for(k=0,j=i;j-i<strlen(s);j++,k++)
				n[k]=w[j];
			
			int result=strcmp(n,s);	
			if(result==0){
				printf("%d\n",i);
			break;	
			}
		}
	}	
    free(n);
		
	return 0;
	
}
   

