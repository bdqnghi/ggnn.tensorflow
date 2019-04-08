//* * * * * * * * * * * * * * * * * * * * * * * * 
//*???????????                       *
//*??????????? .cpp                  *
//*?????  1000012839                       *
//*???2010.12.09                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	char str[101];
	char *p[100] = {NULL};
	int i, j, flag = 1;

	gets(str); 
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			p[j] = &str[i];
			flag = 0;
			j++;
		}
		if (flag == 0 && str[i] == ' ')
		{
			p[j] = &str[i];
			flag = 1;
			j++;
		}
		
	}
	for (i = 0; i < j; i++)
		cout << *p[i];
	cout << endl;
	return 0;
}


		

