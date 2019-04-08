//**********************************************************
//*???????                                          *
//*?  ?????                                          *
//*?  ??1000012806                                      *
//*?????2010.11.17.                                   *
//**********************************************************
int main()
{
	int a, b, c, i, j, k, A, B, C;
	for (i = 0; i <= 2; i ++)
	{
		a = i;
		for (j = 0; j <= 2; j ++)
		{
			b = j;
			if (b == a) continue;
			for (k = 0; k <= 2; k ++)
			{
				c = k;
				if (c == a || c == b) continue;
				A = (b > a) + (c == a);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if ((a + A) == 2 && (b + B) == 2 && (c + C) == 2)
				{
					if (a > b && b > c)
						cout<<"C"<<"B"<<"A"<<endl;
					if (a > c && c > b)
						cout<<"B"<<"C"<<"A"<<endl;
					if (b > a && a > c)
						cout<<"C"<<"A"<<"B"<<endl;
					if (b > c && c > a)
						cout<<"A"<<"C"<<"B"<<endl;
					if (c > a && a > b)
						cout<<"B"<<"A"<<"C"<<endl;
					if (c > b && b > a)
						cout<<"A"<<"B"<<"C"<<endl;
				}
			}
		}
	}
	return 0;
}
