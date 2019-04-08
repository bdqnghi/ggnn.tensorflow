int f(char s[])
{
	int i;
	if(s[0]!='_'&& !(s[0]>64&&s[0]<91) && !(s[0]>96&&s[0]<123))return 0;
	for(i=0;i<strlen(s);i++)if(s[i]!='_'&& !(s[i]>64&&s[i]<91) && !(s[i]>96&&s[i]<123) && !(s[i]>='0'&&s[i]<='9'))return 0;
	return 1;
}
void main()
{
	int n,i;
	char str[50][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s",str[i]);
	for(i=0;i<n;i++)if(f(str[i]))printf("yes\n");else printf("no\n");
}
