int main()
{
	int a[MAXLEN]={0};
	int i,n,count=1;
	void multiply2(int a[MAXLEN]);

	cin >> n;
	a[0]=1;
	for (i=0;i<n;i++)			//calculate 2^n;
		multiply2(a);


	for (i=MAXLEN-1;i>=0;i--)	//find the highest bit
		if (a[i]!=0)
			break;


	for (;i>=0;i--)				//print result
		cout << a[i];
	cout << endl;
	

	return 0;
}

void multiply2(int a[MAXLEN])		//calculate a*2,and store the result in array a[]
{
	int i,l;
	for (l=MAXLEN-1;l>=0;l--)
		if (a[l]!=0)
			break;

	for (i=0;i<=l;i++)
		a[i] *= 2;
	for (i=0;i<l+2;i++)
		if ( a[i]>=10 )
		{
			a[i] -= 10;
			a[i+1]++;
		}
}