int f(char(num[]));
int main()
{
	int len , i , j , k; 
	char str[500] , real[500];
	cin >> str ;
	len = strlen(str) ;
	for(i = 2 ; i <= len ; i++)
		for (j = 0 ; j < len - i + 1 ; j++)
			{
				for (k = 0 ; k < i ; k++)
					real[k] = str[j + k] ;
				real[i] = '\0' ;
				if (f(real))	cout << real << endl ;
			}
	return 0 ;
}
int f(char(num[]))
{
	int len , i;
	char another[500];
	len = strlen(num);
	for(i = 0 ; i < len ; i++)
		another[i] = num[len -1 -i] ;
	another[len] = '\0' ;
	if (strcmp(another,num) == 0)	return 1 ;
	else return 0 ;
}