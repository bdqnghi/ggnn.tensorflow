int main(){
	int j,i,n;
    char s[380];
	gets(s);
    printf("%c",s[0]);
	for(i=1;s[i];i++){
		if(s[i-1]==' '&&s[i]==' '){
			continue;
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}