/******************************************
/* ?  ?: ???????
/* ?  ?: ???  1200012861
/* ?  ?: 2012?11?30?
******************************************/


int main()
{
	char str[105];
	char *p, *q;
	char b;
	int i, len;

    cin.getline(str, 105);
    len = strlen(str); 

    p = str; //?????p???????
	q = str + 1; //?????q???????

    for (i = 1; i < len; i++)
	{
		b = *p++ + *q++;
		cout << b;
	}
	char a = str[0] + str[len - 1];
	cout << a << endl;
	return 0;
}
