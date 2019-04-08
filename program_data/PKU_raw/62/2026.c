//********************************
//*?????????   **
//*????? 1200012917 **
//*???2012.12.7  **
//********************************
int main()
{
	char *p = NULL;
	char str[100];
	int t = 0, i = 0;
	cin.getline(str, 100);
	p = str;
	for (; *p != '\0'; p++)
	{
		if (*p == ' ')
		{
			if (t == 0)
			{
				*(str + i) = *p;
				i++;
				t = 1;
			}
		}
		else
		{
			*(str + i) = *p;
			i++;
			t = 0;
		}
	}
	for (p = str; p <= str + i - 1; p++)
	{
		cout << *p;
	}
	cout << endl;
	return 0;
	
}