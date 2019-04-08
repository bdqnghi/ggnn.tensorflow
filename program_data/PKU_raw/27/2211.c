
int main() {
	double derta,a,b,c;
	int n,i;
	cin >> n;
	for (i=0;i<n;i++)
	{
		cin >> a >> b >> c;
		derta=b*b-4*a*c;
		cout.precision(5);
		cout << fixed;
		if (derta==0)
			cout << "x1=x2=" <<b/(-2*a)<<endl;
		else if (derta>0)
			    cout << "x1=" << (-b+sqrt(derta))/(2*a) << ';' << "x2=" << (-b-sqrt(derta))/(2*a)<<endl;
		     else if (b==0) cout << "x1=" <<b<<'+'<<sqrt(-derta)/(2*a)<<'i'<<';'<< "x2="<<b<<'-'<<sqrt(-derta)/(2*a)<<'i'<<endl;
		          else cout << "x1=" <<-b/(2*a)<<'+'<<sqrt(-derta)/(2*a)<<'i'<<';'<< "x2="<<-b/(2*a)<<'-'<<sqrt(-derta)/(2*a)<<'i'<<endl;
	}
	return 0;
}