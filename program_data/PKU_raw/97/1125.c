int main()
{
	int n;
	int hundred,fifty,twenty,ten,five,one;
	cin >> n;
	hundred=n/100;
	fifty=n%100/50;
	twenty=n%50/20;
	ten=n%50%20/10;
	five=n%10/5;
	one=n%5;
	cout << hundred << endl << fifty << endl << twenty << endl << ten << endl << five << endl << one;
	return 0;
}
