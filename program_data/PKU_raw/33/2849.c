int main(){
	char s[1000][1000];
	int len[1000]={0};
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	for(i=0;i<n;i++)
		len[i]=strlen(s[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(s[i][j]=='A')
				s[i][j]='T';
			else if(s[i][j]=='T')
				s[i][j]='A';
			else if(s[i][j]=='C')
				s[i][j]='G';
			else if(s[i][j]=='G')
				s[i][j]='C';
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}