

int main(int argc, char* argv[])
{
	int i,l;
	char c[101];
	gets(c);
	l=strlen(c);
	for(i=0;i<=l-1;i++){
		printf("%c",c[i]+c[(i+1)%l]);
	}
	return 0;
}

