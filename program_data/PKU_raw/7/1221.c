

int match(char *pa, char *pb, int lenb)
{
	int i;
	for (i = 1; i < lenb; i++)
		if (*(pa + i) != *(pb + i))
			return 0;
	return 1;
}

int main()
{
	char a[300], b[300], c[100], d[300] = {'0'};
	int i, j, lenb, k;
	cin >> a >> b >> c;
	lenb = strlen(b);
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == b[0])
			if (match(&a[i], b, lenb))
			{
				for (j = i + lenb; a[j] !='\0'; j++)
					d[j] = a[j];
				for (j = 0, k = i; c[j] != '\0'; k++, j++)
					a[k] = c[j];
				for (j = i; d[j] != '\0'; j++, k++)
					a[k] = d[j];
				break;
			}
	cout << a << endl;
	return 0;
}