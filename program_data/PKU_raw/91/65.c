int main()
{
	int n,i;

	char str[101];
	char bud[101];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		*(bud+i)=*(str+(i%n))+*(str+((i+1)%n));
	}
	for(i=0;i<n;i++){
		printf("%c",*(bud+i));
	}
	return 0;
}