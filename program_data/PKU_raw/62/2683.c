int main(){
	char s[101],modified[101];
	int i,j;
	gets(s);
	j=0;
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]!=' '||(s[i]==' '&&s[i+1]!=' ')){
			modified[j]=s[i];
			j++;		
		}
	}
	if(s[strlen(s)-1]!=' '){
		modified[j]=s[strlen(s)-1];
		modified[j+1]=0;
	}else
		modified[j]=0;
	printf("%s\n",modified);
	return 0;
}