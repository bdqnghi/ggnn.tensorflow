void chen()
{
	char str[11],substr[4];
	int i,k;
	scanf("%s %s",str,substr);
	k=strlen(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]>=str[k-1])
		{
			k=i+1;
		}
	}
	if(strlen(str)>10||strlen(substr)>3)   return;
	for(i=0;i<k;i++)
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=k;i<strlen(str);i++)
		printf("%c",str[i]);
	printf("\n");
	chen();
}
void main()
{
	chen();
}