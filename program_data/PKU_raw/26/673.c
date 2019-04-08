int main()
{
	char c[101];
	int empty=0;
	int i;	
	gets(c);
	for (i=0;;i++)
	{
		if (c[i]==0) break;
		else if (c[i]==' '&&empty==0) {printf(" ");empty++;}
		else if (c[i]!=' ') {printf("%c",c[i]);empty=0;}
	}
    return 0;
}

