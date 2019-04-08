
int main()
{
	char a[105], * p, x;
	int i = 0;
	gets(a);
	p = a;
	x = * p;
	for(i = 0; * (p + i + 1) != '\0'; i++)
	    * (p + i) += * (p + i + 1);
	* (p + i) += x;
	cout << a;

	return 0;
}