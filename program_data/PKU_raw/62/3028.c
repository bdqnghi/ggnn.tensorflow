
int main(){
    int len,i,j;
    char sz[400];
    gets(sz);
	len=strlen(sz);
    for(i=0;i<len;i++){	
		if(sz[i]==' '){
			if(sz[i+1]==' '){
				for(j=i+1;j<len;j++){
				   sz[j-1]=sz[j];
				}
				sz[len-1]='\0';
				len--;
			}
			if(sz[i+1]==' '){
			   i--;
			}
		}
    }
	printf("%s",sz);
	
     
return 0;
}