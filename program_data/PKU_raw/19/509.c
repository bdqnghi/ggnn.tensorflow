
void main()
{
	char s[100][100],a[100],b[100];
	int i=0,k;

	do
	{
	scanf("%s",s[i]);
	i++;
	}
	while(getchar()!='\n');

	k=i;

	scanf("%s %s",a,b);

	for(i=0;i<k-1;i++)
		if(strcmp(s[i],a)==0) printf("%s ",b);
		else printf("%s ",s[i]);
	if(strcmp(s[i],a)==0) printf("%s",b);
	else printf("%s",s[i]);

}


