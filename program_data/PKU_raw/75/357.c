int main()
{
	int p,i=1,j,k=1,a[1002],b[1002],count,max1=0,max=0,min=1004;  //n?????p????????
	char c;
	do
	{	
		cin >> a[i];
		c=cin.get();
		if (a[i]<min)
			min=a[i];
		i++;
	} while (c==',');
	p=i-1;
	i=1;
	do
	{
		cin >> b[i];
		c=cin.get();
		if (b[i]>max)
			max=b[i];
		i++;
	} while (c==',');		
	for (i=min;i<=max;i++)
	{
		count=0;
		for (j=1;j<=p;j++)
		{
			if (a[j]<=i&&b[j]>=(i+1))
				count++;
		}
		if (count>max1)
			max1=count;
	}
	cout << p << " " << max1 << endl;
	return 0;
}
