


int main() {
	char s[31];
	
	char *p;
	gets(s);
	p=s;
	while((*p)!='\0')
	{
	for(;(*p)>='0'&&(*p)<='9';p++)
	{
		printf("%c",*p);
		}

	if((*p)!='\0')
	p++;
	printf("\n");
	}
	return 0;
}