
int main()
{
	char s1[81];
	char s2[81];
	gets(&s1[0]);
	gets(&s2[0]);
	int i = 0;
	for ( i = 0 ; s1[i] != '\0' ; i++ )
	{
		if ( s1[i] <= 90 )
		{
			s1[i] += 32;
		}
	}
	for ( i = 0 ; s2[i] != '\0' ; i++ )
	{
		if ( s2[i] <= 90 )
		{
			s2[i] += 32;
		}
	}
	int max;
	max = i;
	int n = 0;
	for ( i = 0 ; i < max ; i++ )
	{
		if ( s1[i] < s2[i] )
		{
			printf("<\n");
			n++;
			break;
		}
		if ( s1[i] > s2[i] )
		{
			printf(">\n");
			n++;
			break;
		}
	}
	if ( n == 0 )
	{
		printf("=\n");
	}
	return 0;
}