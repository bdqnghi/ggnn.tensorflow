
int main()
{
	char str[1000 + 1];
	int i,j;
	int len;
	int flag = 0;
	int sum = 0;
	cin >> str;
	len = strlen(str);
	
	for( i =0, j = 1; j <= len - 1; j++)
	{
		
		if(str[i] >= 'a')
			str[i] = str[i] - 32;
		if(str[j] >= 'a')
			str[j] = str[j] - 32;

		if( str[i] == str[j] )
			sum++;
	    if(str[i] != str[j] || (j == len - 1 && str[i] == str[j]) ) 
		{
			flag = 1;
			printf("(%c,%d)",str[i],sum + 1);
			i = j;
			sum = 0;
		}
		
		if(j == len - 1 && sum == 0 && str[j] != str[j-1])
		{
			printf("(%c,%d)",str[j],sum + 1);
		}
	}
	if(len == 1)
	{
		if(str[0] >= 'a')
			str[0] = str[0] - 32;
		printf("(%c,%d)",str[i],sum+1);
	}

	return 0;
}
		