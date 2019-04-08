int main()
{
    int n;
	float a , b, c;
	cin >> n;
	cin >> a >> b;
	c = b / a;
	int i;
	float x, a1, b1, c1;
	for (i=0; i<n-1; i++)
	{
		cin >> a1 >> b1;
	    c1 = b1 / a1;
		x = c1 - c;
		if (x > 0.05)
			cout << "better" << endl;
		else if (x < -0.05 )
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
}