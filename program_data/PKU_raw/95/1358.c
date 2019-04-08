
int main()
{
	char a[100];
	char b[100];
	cin.getline (a ,90);
	cin.getline (b ,90);
	for (int i = 0 ; ;i++)
	{
		if (a[i] !='\0')
		{
			int m = (int)a[i];
			int n = (int)b[i];
			if (m>=97)
				m-=32;
			if (n>=97)
				n-=32;
			if (m == n)
			{
			continue;
			}
			else
			{
				if (m>n)
				{
					cout<<">";
					return 0;
				}
				else
				{
					cout<<"<";
					return 0;
				}
			}
		}
		else
		{
			break;
		}
			
	}
	cout<<"=";
	return 0;
}