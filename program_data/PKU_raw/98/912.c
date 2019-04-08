int main ()
{
	int n, i=0, temp1, temp2;
	scanf("%d", &n);
	char s[10000];
	gets(s);
	gets(s);
	char * ps=s, * ps1;
	temp1=(int)s;
	for ( ; *ps; ps++) {
		i++;
		if (*ps==' ') {
			if (i>LINELENTH+1) {
				for(ps1=(char *)temp1; ps1<(char *)temp2; ps1++)
					printf("%c", *ps1);
				i=((int)ps-temp2)/sizeof(char);
				temp1=temp2+sizeof(char);
				printf("\n");
			}
			else temp2=(int)ps;
		}
	}
	for (ps1=(char *)temp1; *ps1; ps1++)
		printf("%c", *ps1);
	return 0;
}