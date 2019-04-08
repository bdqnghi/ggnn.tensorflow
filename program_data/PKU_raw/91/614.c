int main()
{
	char str[101] , temp;
	int i;

	cin.getline(str , 101);

	temp = str[0];
	for(i = 0; str[i + 1] != 0; i++)
		str[i] += str[i + 1];
			
	str[i] += temp;

	cout << str << endl;
	return 0;
}