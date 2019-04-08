
int main()
{
	int n; 
	cin >> n; 

	for (int i = 0; i < n ;i++)
	{
		char c[10000] ={0};
		cin >> c;

		for (int j = 0; c[j] != '\0'; j++)
		{
			switch(c[j])
			{
			case'A' : cout << "T"; break;
			case'T' : cout << "A"; break;
			case'C': cout << "G" ; break;
			case'G': cout << "C"; break;
			}
		}
		cout << endl;
	}

	
	return 0;
}



