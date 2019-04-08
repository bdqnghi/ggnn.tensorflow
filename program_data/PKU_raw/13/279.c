//**********************
//file homework 5      *
// author ??         *
//data 10/10/29        *
// ?? ??????? *
//**********************

int main ()
{ 
	int i, n, j, c;
	int a[20000] = {0};
	cin >> c;
	for(i = 0;i < c;i ++)
	{cin >> a[i];}
	cout<<a[0];
	for(n = 1; n < c; n ++)
	{
		for(j = n - 1; j >= 0; j --)
		{if (a[j] == a[n])
		break;
		else
			continue;
		}
		if (j == -1)
			cout<<" "<<a[n];
	}

	return 0 ;
}