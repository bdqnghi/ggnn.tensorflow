int main()
{
	int len,i,j,a=0;
	char str[256],sub[256],rep[256],word[256];
	gets(str);
	gets(sub);
	gets(rep);
	len=strlen(sub);
	for(i=0;str[i]!=0;i++){
		if(str[i]==sub[0]){
			for(j=0;j<len;j++){
				word[j]=str[i+j];
			}
			word[len]='\0';
			if(strcmp(word,sub)==0){
				strcpy(word,rep);
				for(j=0;j<i;j++){
					printf("%c",str[j]);
				}
				printf("%s",word);
				for(j=i+len;str[j]!=0;j++){
					printf("%c",str[j]);
				}
				a=1;
				break;
			}
		}
	}
	if(a==0){
		printf("%s",str);
	}
	return 0;
}