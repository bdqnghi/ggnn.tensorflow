int main()
{
	void cut(char word1[32]);
	char word[50][32];
	int n,k;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s",word[k]);
		cut(word[k]);
		printf("%s\n",word[k]);
	}
}
void cut(char word1[32])
{
	char word2[32]={"0"},word3[32]={"0"},word4[32]={"0"},word5[32]={"0"};
	int m;
	m=strlen(word1);
    strncpy(word3,word1,m-2);
	strcpy(word4,word3);
	strcpy(word5,word3);
    if(strcmp(strcat(word3,"er"),word1)==0||strcmp(strcat(word4,"ly"),word1)==0)
		strcpy(word2,word5);
	else strncpy(word2,word1,m-3);
	strcpy(word1,word2);
}