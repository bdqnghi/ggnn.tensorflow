int main(int argc, char* argv[])
{	char s[1000];
	char * p, * a;
	int i;
	gets(s);
	a=s;
	for(p=s; p<s+strlen(s)-1; p++){
		printf("%c",*p + *(p+1));
	}
	printf("%c",*p + *a);
	return 0;
}
