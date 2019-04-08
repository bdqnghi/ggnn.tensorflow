
int main()
{
	char s1[300] , s2[300] , s3[300];
	scanf ( "%s%s%s" , s1 , s2 , s3 );
	char *p = strstr ( s1 , s2 );
	if ( p )
	{
		char temp = *(p + strlen(s2));
		strcpy ( p , s3 );
		*(p+strlen(s2)) = temp;
	}
	printf ( "%s\n" , s1 );
	return 0;
}

