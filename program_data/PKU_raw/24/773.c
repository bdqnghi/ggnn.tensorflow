int main()
{
	int min,max,i;
	char str_i[100],str_a[100],str[200];
	int flag = 1;
	max = -1;
	min = 100000;
	while(flag)
	{
		for( i = 0;;i++ )
		{
			str[i] = getchar();
			if( str[i] == ' ' )
			{
				str[i] = '\0';
				break;
			}
			if( str[i] == '\n' )
			{
				str[i] = '\0';
				flag = 0;
				break;
			}
		}
		if( strlen(str) < min )
		{
			min = strlen(str);
			strcpy(str_i,str);
		}
		int test = strlen(str);
		if( test > max )
		{
			max = strlen(str);
			strcpy(str_a,str);
		}
	}
	printf("%s\n",str_a);
	printf("%s",str_i);
	return 0;
	
	
}