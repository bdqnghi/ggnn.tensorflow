int main ()
{
	char s1[300], s2[300], s3[300], *p = NULL;
	int i, l1, l2, l3;
	cin >> s1 >> s2 >> s3;
	p = strstr (s1, s2);
	l1 = strlen(s1);
	l2 = strlen(s2);
	l3 = strlen(s3);
	if (p == NULL)
		cout << s1;
	else
	{
		for (i = 0; &s1[i] < p; i++)
			cout << s1[i];
		cout << s3;
		for (p = p + l2; *p != '\0'; *p++)
			cout << *p;
	}
	return 0;
}