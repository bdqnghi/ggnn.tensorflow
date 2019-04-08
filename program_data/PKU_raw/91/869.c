
int main()
{
	char a[101], *pa = a, b[101], *pb = b;
	cin.getline(a, sizeof(a));
	for (pa = a; pa < a + strlen(a) - 1; pa++) *pb++ = *pa + *(pa + 1);
	*pb++ = *pa + *a;
	*pb = '\0';
	cout << b << endl;
	return 0;
}
