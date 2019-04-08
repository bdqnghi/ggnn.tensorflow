int main()
{
	int n, a[1002], b[1002], first1, first2, last1, last2, prize, i;
	while(cin>>n)
	{
		if(n == 0)
			break;
		first1 = first2 = 0;
		last1 = last2 = n-1;
		prize = 0;
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for(i = 0; i < n; i++)
			scanf("%d", &b[i]);
		sort(a, a + n);
		sort(b, b + n);
		while(first1 <= last1)
		{
			if(a[first1] > b[first2])
			{
				prize += 200;
				first1++;
				first2++;
			}
			else if(a[first1] < b[first2])
			{
				prize -= 200;
				first1++;
				last2--;
			}
			else
			{
				while(first1 <= last1)
				{
					if(a[last1] > b[last2])
					{
						prize += 200;
						last1--;
						last2--;
					}
					else if(a[last1] <= b[last2])
					{
						if(a[first1] < b[last2])
							prize -= 200;
						else if(a[first1] > b[last2])
							prize += 200;
						first1++;
						last2--;
						break;
					}
				}
			}
		}
		cout<<prize<<endl;
	}
	return 0;
}