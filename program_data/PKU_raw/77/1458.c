
char str[100], b, g;
void match(int k)
{
	int i;
	if(str[k] == '\0')
		return;
	if(str[k] == g)
	{
		str[k] = '*';
		for(i = k - 1; i >= 0; i--)
			if(str[i] == b)
			{
				str[i] = '*';
				cout << i << " " << k << endl;
				break;
			}
	}
	match(k + 1);
}

int main()
{
	int length;
	cin.getline(str,100);
	length = strlen(str);
	b = str[0];
	g = str[length - 1];
	match(0);
	return 0;
}




	
