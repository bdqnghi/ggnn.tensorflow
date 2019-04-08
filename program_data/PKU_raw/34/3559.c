int Is_OddNumber(int x);

int main()
{
	int number, result, mark;
	cin >> number;
	result = number;    // ??????
	if (number== 1)
	{
		cout << "End";
	}
	else{
	do 
	{   int Is_OddNumber(int x);
        int f = Is_OddNumber(result);
		if (f == 0)       // ??f?0???number???
		{
            mark = result;
			result = result / 2;
			if (result != 1)
			{
				cout << result * 2 << "/2=" << result << endl;
			}
		}
		else
		{
			mark = result;
			result = result * 3 + 1;
			if (result != 1)
			{
				cout << (result - 1) / 3 << "*3+1=" << result << endl;
			}

		}
	} while (result != 1);
	if (mark == 2)
	{
		cout << "2/2=1" << endl;
	}
	else 
	{
		cout << "0*3+1=1" << endl;
	}
    if (result == 1)
	{
		cout << "End";
	}
	}
    return 0;
}


int Is_OddNumber(int x)
{
	int f;
	if ( x % 2 == 0)
	{
		f = 0;
	}
	else 
	{
		f = 1;
	}
	return f;
}