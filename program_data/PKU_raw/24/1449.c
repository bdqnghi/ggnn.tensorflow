int main(){
	char s[1000],word[100][20];
	gets(s);
	int l,i,k=0,n=0;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]==' '){
			s[i]='\0';
			strcpy(word[n],s+k);
			n++;
			k=i+1;
		}
	}
	strcpy(word[n],s+k);
	int max=0,min=0;
	for(i=0;i<=n;i++){
		if(strlen(word[max])<strlen(word[i])) max=i;
		if(strlen(word[min])>strlen(word[i])) min=i;
	}
    puts(word[max]);
	puts(word[min]);
	return 0;
}
