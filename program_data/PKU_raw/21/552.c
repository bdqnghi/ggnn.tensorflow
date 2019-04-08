int main()
{
	int a[310], n, i, j, temp,  count=0;
	double s = 0,  b[310] = {0}, m;
	cin >> n;

	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp; 
			}
		}
	s = s/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>s)
			b[i] = a[i] - s;
		else
			b[i] = s - a[i];
		if(b[i]>m)
			m = b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=m)
			count++;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=m)
		{
			count--;
			if(count)
				cout << a[i] << ",";
			else
				cout << a[i] << endl;
		}
	}
	return 0;
	

}