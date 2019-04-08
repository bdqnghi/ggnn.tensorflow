//***************************************************
//*  ????1.cpp                                  *
//*  ??????1100012964?                       *
//*  ?????2011?12?                           *
//*  ???????????                         *
//***************************************************
void judge(int *, int *, int);                                
int main()
{
	int i, j, k, n, num[10000] = {0}, num0[10000] = {0};
	cin >> n;
	for (k = 0; ;k++)
	{
		cin >> i >> j;
		if ((i != 0) || (j != 0))
		{
			num0[i] = 1;                             //“??”?????????????????                  
			num[j] = num[j] + 1;                     //?????????
		}
		else 
			break;
	}
	judge(num, num0, n);
	return 0 ;
}
void judge(int * num, int * num0, int n)
{
	int a, b = 0;
	for (a = 0; a < n; a++)
	{
		if ((num[a] == n - 1) && (num0[a] == 0))          //??????“????”
		{
			cout << a <<endl;
			b++;
		}
	}
	if (b == 0)                                           //?????????“????”
		cout << "NOT FOUND";
	return ;
}

