int main()
{
	char sen[100],word[50][20]={0},pre[20],post[20];
	int i,l,f[50]={0},g[50]={0};
	int word_num=0,char_num=0;
	gets(sen);
	gets(pre);
	gets(post);
	l=strlen(sen);
	for(i=0;i<l;i++){
		if(sen[i]!=' '){
			word[word_num][char_num]=sen[i];
			char_num++;
		}
		else if(sen[i]==' '){
			word_num++;
			char_num=0;
		}
	}
	for(i=0;i<=word_num;i++){
		f[i]=strlen(word[i]);
	}
	for(i=0;i<=word_num;i++){
		if(strcmp(word[i],pre)==0)
			strcpy(word[i],post);
	}
	for(i=0;i<word_num;i++){
		printf("%s",word[i]);
		printf(" ");
	}
	printf("%s",word[word_num]);
	return 0;
}