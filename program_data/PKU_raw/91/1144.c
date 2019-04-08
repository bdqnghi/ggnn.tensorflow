int main ()
{
	int i , j, k;
	char s[150] = {0};
	char s1[150] = {0};
	gets(s) ;
	for ( i = 0; i <= strlen(s) - 2 ; i++ )
	{
		s1[i] = s[i] + s[ i + 1];
		cout << s1[i] ;
	}
	s1[strlen(s) - 1] = s[ strlen(s) -1] + s[0];
	cout << s1[strlen(s) -1] <<endl;
	return 0;
}
