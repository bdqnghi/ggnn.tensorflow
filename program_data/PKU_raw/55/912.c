

int main()
{
	int a, b, i;
	long int x = 0, y;
	char num1[100], num2[100], c;
	
	scanf("%d%s%d", &a, &num1, &b);
	
	for ( i = 0; i < strlen(num1); i ++ ){
		if ( num1[i] >= 'a' && num1[i] <= 'z' )
			x = x * a + num1[i] - 'a' + 10;
		 if ( num1[i] >= 'A' && num1[i] <= 'Z' )
			 x = x * a + num1[i] - 'A' + 10;
		 if ( num1[i] >= '0' && num1[i] <= '9' )
			 x = x * a + num1[i] - '0';
	}
	if ( x == 0 ){
		printf("0");
		return 0;
	}
	i = 0;
	while ( x > 0 ){
		num2[i++] = x % b;
		x = x / b;
	}
	for ( ; i > 0; i-- ){
		if ( num2[i - 1] >= 0 && num2[i - 1] <= 9 )
			printf("%d", num2[i - 1]);
		if ( num2[i - 1] >9)
			printf("%c", num2[i - 1] - 10 + 'A');
	}
	printf("\n");

	return 0;
}
