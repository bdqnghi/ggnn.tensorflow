int main()
{
    int n,a,b,c;
    cin >> n;
    b=n;
    c=n;
    if (n<10)
    cout << n;
    else
    {
    int length = 1,k = 10;
   while((c/k) != 0)
    {
      length++;
      k=k*10;
    }
    for (int i=1;i<=length;i++)
    {
    	cout << b%10;
		b=(b-b%10)/10;
    	
    }
    }
	return 0;
}