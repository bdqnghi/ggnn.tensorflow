int main(){
	char str[101];
	int len,i,u;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>0;i--){
		if(str[i]==' '&&str[i-1]==' '){
			for(u=i;u<=len;u++){
				str[u]=str[u+1];
			}
		}
	}
	puts(str);
	return 0;
}