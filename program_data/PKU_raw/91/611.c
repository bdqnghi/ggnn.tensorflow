/**
 * ??????·
 * ???1000012844
 * ??????????
 **/


int main()
{
	char s1[ 101 ], s[ 101 ];
	cin.getline( s, 101 );
	char *ptr1 = NULL, *ptr2 = NULL, *targetPtr = NULL;
	ptr1 = s;
	ptr2 = s + 1;
	targetPtr = s1;
	int lenth = strlen( s );

	while ( ptr2 != s + lenth )
	{
		*targetPtr++ = *( ptr1++ ) + *( ptr2++ );
	}
	*targetPtr++ = *s + *ptr1;
	*targetPtr = 0;
	cout << s1;
}