int l(int a)
{
	int i,j,k;
	i = a % 4;
	j = a % 100;
	k = a % 400;
	if(i==0)
	{
		if(j!=0||k==0)
	        return 1;
		else
			return 0;
	}
	else
		return 0;
}
int main()
{
	int a[3],i,j,k=0;
	int b[12] ={0,31,28,31,30,31,30,31,31,30,31,30};
	int c[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
	int d[12];
	cin >> a[0] >> a[1] >> a[2];
	i = a[0];
	if(l(i)==1)
	{
		for(j=0;j<12;j++)
			d[j] = c[j];
	}
	else
	{
		for(j=0;j<12;j++)
			d[j] = b[j];
	}
	for(i=0;i<a[1];i++)
		k = d[i] + k;
	k = k + a[2];
	cout << k <<endl;
	return 0;
}
