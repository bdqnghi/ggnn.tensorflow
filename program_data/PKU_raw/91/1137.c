
int main()
{
	char a[110], b[110];
	int i;
	gets( a);
	for(i = 0; a[i + 1] != '\0'; i++)
		b[i] = a[i] + a[i + 1];
	b[i] = a[i] + a[0];
	b[i + 1] = '\0';
	puts(b);
	return 0;
}