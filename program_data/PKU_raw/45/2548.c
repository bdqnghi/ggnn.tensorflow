int main()
{
	int i,j,k1,k2;
	char word1[55]={'\0'},word2[55]={'\0'};
	scanf("%s %s",word1,word2);
	k1=strlen(word1);
	k2=strlen(word2);
	for(i=0;i<=k2-k1;i++)
	{
		for(j=i;j<=i+k1-1;j++)
		{if(word2[j]!=word1[j-i]) break;}
		if(j==i+k1) {printf("%d",i);break;}
	}
	return 0;
}