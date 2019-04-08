int main(){
	char s[101];
	int i,k=0;
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
			s[k]=s[i];
			k++;
		}else if(s[i]==' '&&s[i-1]!=' '){
			s[k]=s[i];
			k++;
		}else if(s[i]==' '&&s[i-1]==' '){
			k+=0;
		}
	}
	s[k]='\0';
	puts(s);
	return 0;
}
