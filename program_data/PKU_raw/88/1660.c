int main ()
{
	char s[35];
	gets(s);
	char * ps=s;
	int i=0, num=0;
	for(; *ps; ps++) {
		if (*ps>='0'&&*ps<='9') {
			num+=*ps-'0';
			num*=10;
			i=1;
		}
		else if (i==1) {
			printf("%d\n", num/10);
			num=0;
			i=0;
		}
	}
	if (i==1) printf("%d\n", num/10);
	return 0;
}