int main(){
	char sentence[5000];
	gets(sentence);
	char word[50][100];
	int i,k=0,n=0,len;
	len=strlen(sentence);
	for (i=0;i<len;i++){
		if(sentence[i]!=' '){
			word[n][k]=sentence[i];
			k++;
		}
		else{
			word[n][k]='\0';
			n++;
			k=0;
		}
	}
	word[n][k]='\0';
	int max=0,min=0;
	for (i=0;i<n+1;i++){
		if(strlen(word[i])<strlen(word[min])){
			min=i;
		}
		if(strlen(word[i])>strlen(word[max])){
			max=i;
		}
	}
	puts(word[max]);
	puts(word[min]);
	return 0;
}