int main()
{
	int  n,k;
	cin >> n >> k;
	double t1;
	int t2;
	int b=0;
	for(int i = 1; ; i++)
	{
		t1 = i;
		b = 0;
		for(int j = 1;j<= n ; j++)
		{
			t1 = n * t1 / (n-1) + k;
			t2 = floor(t1);
			//cout <<t1 << "  " << t2 << endl;
			if(t1 != t2)
				break;
			else 
				b++;

		}
		if ( b == n )
		{
			cout << t2 << endl;
		    return 0;
		}
	}

}