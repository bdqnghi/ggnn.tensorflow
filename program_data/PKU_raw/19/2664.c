


char z[10000];
char a[10000];
char b[10000];
char temp[10000];

int main()
{
	int i, j;
	
	gets(z);
	scanf("%s %s", a, b);
	//cout<< z << endl << a << endl << b << endl;
	int length = strlen(z);
	for(i = 0; i < length; i++)
	{
		while(z[i] == ' ')
		{
			cout << ' ';
			i++;
		}
		int k = 0;
		for(j = i; j < length; j++)
		{
			if(z[j] != ' ')
			{
				temp[k++] = z[j];
			}
			else break;
		}
		temp[k] = '\0';
		if(strcmp(temp, a) == 0)
		{
			cout << b;
		}
		else
		{
			cout << temp;
		}
		i = j;
		i--;
	}
	cout << endl;
	return 0;
}