int main ()
{
	int n; 
	double a[100], b[100];
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i] >> b[i];
	for(int j = 1; j < n; j ++)
	{
		if( (b[j] / a[j]) - (b[0] / a[0] ) > 0.05)
			cout << "better" << endl;
		else if((b[j] / a[j]) -( b[0] / a[0] ) < -0.05)
			cout << "worse" << endl;
			else
				cout<< "same" << endl;
	}
	return 0;
}
