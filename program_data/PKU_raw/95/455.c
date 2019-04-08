
void main()
{
	char a[100]={'\0'},b[100]={'\0'};
	int i;

	gets(a);
	gets(b);

	for(i=0;i<strlen(a);i++)
		if(a[i]>='A' && a[i]<='Z') a[i]+=32;

	for(i=0;i<strlen(b);i++)
		if(b[i]>='A' && b[i]<='Z') b[i]+=32;

	if(strcmp(a,b)==0) printf("=");
	else if(strcmp(a,b)>=0) printf(">");
	else printf("<");
}