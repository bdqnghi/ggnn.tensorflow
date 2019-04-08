// ????2.cpp : ??????????????
//


void out( int,int );

int t = 1;


int main()
{
	int n = 0;
	int i = 0;
	double sum = 0;
	cin >> n;

	for( i = 1;i <= n;i++ )
	{
		cin >> sum;
		out(sum,2.0);
		cout << t << endl;
		t = 1;
	}

	cin >> i;

	return 0;
}

void out(int sum,int q )
{
		int num = 0;
		double m = sum;
		num = sqrt(m);
		if( sum % q == 0 && q <= num )
		{
			t++;
			out( sum / q,q );
			out( sum,q + 1 );
		}
		if( sum % q != 0 && q <= num )
			out( sum,q + 1);
}




