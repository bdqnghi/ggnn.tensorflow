int main()
{
	int n,i,j=0;
	char s[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		j=0;
		scanf("%s",s);
	while(s[j]!='\0')
	{
		if(s[j]=='A')printf("T");
		if(s[j]=='T')printf("A");
		if(s[j]=='G')printf("C");
		if(s[j]=='C')printf("G");
		j++;
	}
	printf("\n");
}
	return 0;
}
		
