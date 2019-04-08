int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	for(int i=0;a[i]!='\0';i++)
		a[i]=tolower(a[i]);
	for(int j=0;b[j]!='\0';j++)
		b[j]=tolower(b[j]);
	if(strcmp(a,b)>0)printf(">");
	if(strcmp(a,b)<0)printf("<");
	if(strcmp(a,b)==0)printf("=");

	return 0;
}

