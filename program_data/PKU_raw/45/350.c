int main()
{
	int i;
	char s[50],w[50];
	char * p;
	scanf("%s",s);
	scanf("%s",w);
	p=strstr(w,s);
	i=p-w;
	printf("%d",i);
	return 0;
}