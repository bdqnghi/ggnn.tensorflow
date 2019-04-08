

int main()
{
	int n, i, s, k, j, p;
	int a[300];
	cin >> n;
	float ave, max;
	
	s=0;
	max = 0;
	k=0;
	for (i=0;i<n;i++)
	{
		cin >> a[i];
		s=s+a[i];
	}
	ave = s / 1.0 / n;


	for (i=0;i<n;i++)
		if (fabs(ave - a[i]) >= max)
			max = fabs(ave - a[i]);
	for (i=0;i<n;i++)
		if (max-fabs(ave - a[i])<0.001)
		{
			a[k]=a[i];
			k++;
		}
	if (k == 1)
		cout << a[0] << endl;
	else
	{
		for (i=0;i<k-1;i++)
			for (j=0;j<k-1-i;j++)
				if (a[j]>a[j+1])
				{
					p=a[j];
					a[j]= a[j+1];
					a[j+1]=p;
				}
		cout << a[0] ;
		for (i=1;i<k;i++)
			cout << "," << a[i];
		cout << endl;

	}

	return 0;

}