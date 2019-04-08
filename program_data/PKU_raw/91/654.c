//Name: ???????#
//Author:   ??      #
//Number: 1000062710  #
//Date: 2010?12?15?#
//#####################
int main()
{
	char str[101];
	cin.getline(str,101);
	int lin = strlen(str);
	char a[100];
	for(int i = 0; i <= lin; i++)
	{
		if(i < lin)
			str[i] = str[i];
		else
			str[i] = str[0];
    }
	for(int j = 0; j < lin; j++)
	{
		a[j] = str[j] + str[j + 1];
		cout << a[j];
	}
	cout << endl;
	return 0;
}