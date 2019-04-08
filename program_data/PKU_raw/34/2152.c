
int jiaogu(int a)
{
	if ( a == 1 )
		return 1;
	else if ( a % 2 == 0 )
	{
		cout << a << "/2=";
		return a / 2;
	}
	else
	{
		cout << a << "*3+1=";
		return a * 3 + 1;
	}
}

int main ()
{
	int a, i;
	cin >> a;
	if ( a == 1 )
	{
		cout << "End" << endl;
	}
	else
	{
		for ( i = 0; ; i ++ )
		{
			if ( a == 1 )
			{
				cout << "End" << endl;
				break;
			}
			else
			{
				a = jiaogu(a);
				cout << a << endl;
			}
		}
	}
	return 0; 
}

