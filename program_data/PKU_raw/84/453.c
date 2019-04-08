int main()
{
	int k,max=0,max2=0,n,m;//max???????max2?????????n??????????m??????
	cin >> k;
	for(int i=0;i<k;i++)
	{
		cin >> n;
		if(n==1)
			max=n;
		else if(n==2)
		{
			max2=n;
			if(max2>max)
			{
				n=max2;
				max2=max;
				max=n;
			}
		}
		else
		{
			if(n>max)
			{
				max2=max;
				max=n;	
			}

			else if (max>=n&&n>=max2)
				max2=n;
		}
	}
    cout << max << endl;
	cout << max2 << endl;
	return 0;
}