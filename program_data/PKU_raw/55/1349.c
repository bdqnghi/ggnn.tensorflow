/**
* @file 2.cpp
* @author ??? 1100012944
* @date 2011-11-12
* @description
* ???????????
*/
long int change1(char n[], int a)
{
	long int s, y = 0;
	int i;
	for(i = 0; n[i] != '\0'; i++) 
	{ 
		if (n[i] >= '0' && n[i] <= '9') 
			s = n[i] - '0'; //9???????10???? 
		else if (n[i] >='A' && n[i] <='Z')
		{
			s = n[i] - 'A' + 10;
		}
		else
		{
			s = n[i] - 'a' + 10;
		}
		y = y * a + s;
	}
	return y;
}
int main()
{
	int a, b, i = 0, j;
	long int s, t;
	char n[200], r[200];
	cin >> a;
	cin >>n;
	cin >> b;
	s = change1(n, a);
	while( s >= b )
	{
		t = s % b;
		if ( t >= 0 && t <= 9)
		{
			r[i] = t + '0';
		}
		else 
		{
			r[i] = t - 10 + 'A';
		}

		i ++;
		s = s / b;
	}
	if ( s >= 0 && s <= 9)
	{
		r[i] = s  + '0';
	}
	else
	{
		r[i] = s - 10 + 'A';
	}
	for ( j = i; j >= 0; j --)
	{
		cout << r[j];
	}
	return 0;
}



