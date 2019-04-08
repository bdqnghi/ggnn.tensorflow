int reverse(int num);
int main()
{
	int n;
	while (cin >>n)
	{
	   if (n<0) {cout <<"-";n=-n;}
	   while (n%10==0&&n!=0)
	     n=n/10;
       reverse(n);
	}

	return 0;
}
int reverse(int num)
{
    cout <<num%10;
	if (num/10!=0)
		reverse(num/10);
	else cout <<endl;
	return 0;
}