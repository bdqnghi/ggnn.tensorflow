int main()
{
	double n;
	cin >> n;
	int i;
	int x;
	int a=0, b=0, c=0, d=0;
	double a1, b1, c1, d1;
    for (i=0;i<n;i++)
	{	cin >> x;
	    if (x<19)
			a=a+1;
		else if (18<x && x<36)
			b=b+1;
		else if (35<x && x<61)
			c=c+1;
		else
			d=d+1;
	}
	a1 = 100*a/n;
	b1 = 100*b/n;
	c1 = 100*c/n;
	d1 = 100*d/n;
	cout << fixed << setprecision(2)<<"1-18: " << a1 << "%" << endl;
	cout << fixed << setprecision(2)<<"19-35: " << b1 << "%" << endl;
	cout << fixed << setprecision(2)<<"36-60: " << c1 << "%" << endl;
	cout << fixed << setprecision(2)<<"60??: " << d1 << "%" << endl;
	return 0;
}