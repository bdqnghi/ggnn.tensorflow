int main(int argc, char* argv[])
{
	int n,p=0,m=0;
	int i;
	char word[60],s[60];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",word);
    	m=strlen(word);
		if (p+m>80)
		{
			printf("\n");
			p=0;
		}
		else if(i>0)
		{
			printf(" ");
		}
		p=p+m+1;
		strcpy(s,word);
		printf(s);
	}
	printf("\0");
	return 0;
}