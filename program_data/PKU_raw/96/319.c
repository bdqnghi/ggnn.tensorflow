int main()
{
	char beDiv[101];
	int i, r, tell, lenth;
	int result [101];
	cin >> beDiv;
	for(i = 0, r = 0; beDiv[i] != '\0'; i++)
	{
		r = r * 10 + beDiv[i] - '0';
		result[i] = r / 13;
		r %= 13;
	}
	lenth = i;
	if((lenth == 2 && (beDiv[0] - '0') * 10 + beDiv[1] - '0' < 13)
             || lenth == 1)
		cout << '0' << endl;
	else
	{
                  for(i = 0, tell = 0; i < lenth; i++)
		{
		    if(result[i] != 0)
			    tell = 1;
		    if(tell)
			    cout << result[i];
		}
	}
	cout << endl << r << endl;
	return 0;
}