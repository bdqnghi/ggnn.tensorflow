int main()
{
    int i,n,a[100],b[100];
	cin >> n;
	cin >> a[0] >> b[0];
	for(i=1;i<n;i++)
	{
		cin >> a[i] >> b[i];
		if(20.0*b[i]/a[i]-20.0*b[0]/a[0]>1)
			cout << "better" << endl;
		else if(20.0*b[0]/a[0]-20.0*b[i]/a[i]>1)
			cout << "worse" << endl;
		else cout << "same" << endl;
	}
	return 0;
}