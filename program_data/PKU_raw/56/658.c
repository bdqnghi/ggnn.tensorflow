int main()
{
	int a,b;
	cin >>a;
	b=0;
	while (a!=0)
	{
		b=b*10+a%10;
		a=a/10;
	}
	cout <<b<<endl;
	return 0;
}
