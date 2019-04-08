

int main()
{
	char a[80], b[80];
	cin.getline(a, 80);
	cin.getline(b, 80);
	int i;
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] < 97 && a[i] >= 65)
			a[i] += 32;
		if(b[i] < 97 && a[i] >= 65)
			b[i] += 32;
	}
	if(strcmp(a, b) == 0)
		cout << '=' << endl;
	else if(strcmp(a, b) > 0 )
		cout << '>' << endl;
	else
		cout << '<' << endl;
	return 0;
}