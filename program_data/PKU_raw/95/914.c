int main()
{
	char a[80], b[80];
	cin.getline(a, 80);
	cin.getline(b, 80);
	int i;
	for(i = 0; a[i] != '\0' || b[i] != '\0'; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
			a[i] = a[i] + 32;
		if(b[i] >= 65 && b[i] <= 90)
			b[i] = b[i] + 32;
	}
	for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
	{
		if(a[i] == b[i])
			continue;
		else if(a[i] > b[i])
		{
			cout << ">" << endl;
			break;
		}
		else
		{
			cout << "<" << endl;
			break;
		}
	}
	if(a[i] == '\0' && b[i] == '\0')
		cout << "=" << endl;
	else if(a[i] == '\0' && b[i] != '\0')
		cout << "<" << endl;
	else if(a[i] != '\0' && b[i] == '\0')
		cout << ">" << endl;
	return 0;
}