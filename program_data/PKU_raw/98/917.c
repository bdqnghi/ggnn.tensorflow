int main()
{
	int n,i,j,sum=0;
	char s[500][100];
	char *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",s[i]);
	for(i=0;i<n-1;i++)
	{
		for(p=s[i];p<s[i]+strlen(s[i]);p++)
		printf("%c",*p);
		sum+=strlen(s[i])+1;
		if(sum+strlen(s[i+1])>80)
		{
			printf("\n");
			sum=0;
		}
		else printf(" ");
	}
	for(p=s[n-1];p<s[n-1]+strlen(s[n-1]);p++)
	printf("%c",*p);
	return 0;
}