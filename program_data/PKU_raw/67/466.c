int main()
{
	double n,a,b,c,d,p1,p2;
	cin >> n;
	cin >> a >> b;
	p1=(double)b/(double)a;
	for (int i=2;i<=n;i++)
	{
		cin >> c >> d;
		p2=(double)d/(double)c;
		if ((p1-p2)>0.05)
			cout << "worse" << endl;
		else 
		{
			if ((p2-p1)>0.05)
			cout << "better" << endl;
			if (((p2-p1)<0.05)&&((p2-p1)>(-0.05))) 
				cout << "same" << endl;
		}
	}
	return 0;
}