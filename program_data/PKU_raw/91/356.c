/*
 * relative_string.cpp
 *
 *  Created on: 2013-12-12
 *      Author: Mac
 */


int main()
{
	char a[200], b[200], *p, *q;
	memset(a, '\0', 200);
	memset(b, '\0', 200);
	p = a;
	q = b;
	gets(p);

	for(; q < b + strlen(a);q++)
	*q = *p + *(++p);

	*(q-1) = *(p-1) + *a;

	cout << b;
}
