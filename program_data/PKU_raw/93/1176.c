int main()
{
	int n; 
	cin >> n;
	int sum = 0;
	for(int i = 3; i <= 7; i = i+2)
	{
            if((n%i) == 0)
            sum = sum + 1;
    }
    int t = 0;
    for(int i = 3; i <= 7; i = i+2)
	{
            if((n%i) == 0)
            {
             t = t + 1;
               if(t < sum) cout << i <<" ";
               else  cout << i ;
            }
    }
    if(sum == 0) cout << 'n';
	//while(1);
	return 0;
}
