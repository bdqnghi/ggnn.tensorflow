
char a[10000];
int i, bo, ctt[10000];
int main()
{
	scanf("%s", a);
	memset(ctt, 0, sizeof(ctt));
	bo=0;
	for (i=0; i<strlen(a); i++)
		if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')) ctt[a[i]]++, bo=1;
	if (!bo) printf("No");
	for (i='A'; i<='Z'; i++) if (ctt[i]) printf("%c=%d\n\n", i, ctt[i]);
	for (i='a'; i<='z'; i++) if (ctt[i]) printf("%c=%d\n\n", i, ctt[i]);
	return 0;
}
