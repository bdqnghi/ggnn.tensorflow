
int main()
{
	char a[101] = {'\0'};
	char b[101] = {'\0'};
	char * pa = a;
	char * pb = b;
	int i;

	gets(a);
	for (i = 0; i < strlen(a)-1; i++) {
		* pb = * pa + * (pa + 1);
		pb++;
		pa++;
	}
	* pb = * pa + * a;
	printf("%s",b);
	return 0;
}