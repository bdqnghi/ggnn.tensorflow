/**
????1.cpp
?  ?????
?  ??12.7
?  ???????
*/
int separate_apples(int);
int n, k;
int main()
{
	
	cin >> n >> k;

	cout << separate_apples(n) << endl;
	return 0;
}
int separate_apples(int a) 
{ 
	if(a == 0 && n != 2)
		return (pow((double)(n - 1), (double)(n)) - k * (n - 1));
    if(a == 0 && n == 2)
		return 1;
	else
		return (n * (separate_apples(a - 1) + k * (n - 1)) / (n - 1) - k * (n - 1));
}