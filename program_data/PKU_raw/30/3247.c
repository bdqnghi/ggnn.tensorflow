
int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for(int i = 1; i <=n; i++)
	{
		int k = i; //For Processing
		int sign = (k % 7 == 0)?1:0; //For recording K's Relativeness to 7 & Initialization
		while(k>0) //Counting each Digit
		{
			sign += (k % 10 == 7);
			k = k / 10;
		}
		if(sign == 0) 
		{
			sum += i * i;
			//cout << i << ' ' << sum << endl; For Debuging
		}
	}
	cout << sum;
}	