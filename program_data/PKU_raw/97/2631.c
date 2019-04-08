//**************************
//**??                  **
//**??:??? 1100012914**
//**??:2011.11.6        **
int main()
{
	int a,hu,fif,tw,te,fiv,one,i,t;
	cin >> a;
	t = a % 10;
		if(t >= 5)
		{
			fiv = 1;
			one = t - 5;
		}
		else
		{
			fiv = 0;
			one = t;
		}
		a = a /10;
	t = a % 10;
	if (t >= 5)
	{
		fif = 1;
		t = t - 5;
	if (t > 3)
	{
	tw = 2;
	te = t - 4;
	}
	else
		if(t > 1)
		{
			
			tw = 1;
			te = t - 2;
		}
		else 
	{
		
		tw = 0;
		te = t;
	}
	}
	else
	{
		if (t > 3)
	{fif = 0;
	tw = 2;
	te = t - 4;
	}
	else
		if(t > 1)
		{
			fif = 0;
			tw = 1;
			te = t - 2;
		}
		else 
	{
		fif = 0;
		tw = 0;
		te = t;
	}
	}

	a = a/10;
	t = a % 10;
	hu = t;
	cout << hu << endl << fif << endl << tw << endl << te << endl << fiv << endl << one << endl;

	return 0;
}
