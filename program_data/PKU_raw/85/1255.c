int main()
{
	int n,i,j,k;
	char word[1000][1000]={'\0'};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",word[i]);
		k=strlen(word[i]);
		if((word[i][0]>=65&&word[i][0]<=90)||(word[i][0]>=97&&word[i][0]<=122)||(word[i][0]=='_'))
		{
			j=1;
			while(j<=k-1)
			{
				if(word[i][j]=='_') j=j+1;
				else if((word[i][j]>=65)&&(word[i][j]<=90)) j=j+1;
				else if((word[i][j]>=97)&&(word[i][j]<=122)) j=j+1;
				else if((word[i][j]>=48)&&(word[i][j]<=57)) j=j+1;
				else break;
			}
			if(j==k) printf("yes\n");
			else printf("no\n");
		}
		else printf("no\n");
	}
	return 0;
}