int main(){
	char newWord[50];
	char ch;
	char shortest[50];
	char longest[50];
	int slen=1000,llen=0,i,index=0,len,charlen;
	while(1){
		scanf("%s%c",newWord,&ch);
		len=strlen(newWord);
		if(len>llen)
			{
				strcpy(longest,newWord);
				llen = len;
			}
			if(len<slen && len>0)
			{
				strcpy(shortest,newWord);
				slen=len;
			}
		if(ch=='\n')
			break;
	}
	printf("%s\n",longest);
	printf("%s\n",shortest);
	return 0;
}