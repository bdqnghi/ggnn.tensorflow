int main()
{
	int a[5][5], i, t, m[5] = {0}, n[5] = {0}, p, flag = 0;
	for(i = 0; i<5; i++)
		for(t=0; t<5; t++)
			cin >> a[i][t];
	for(i=0; i<5; i++)
		for(t=0;t<5;t++)
		{
			if(m[i]<a[i][t])
			{
				m[i] = a[i][t]; 
				n[i] = t;
			}
		}
	for(p=0;p<5;p++)
	{
		for(i=0;i<5;i++)
		{
			if(m[p]>a[i][n[p]])
			{
				flag++;
				break;
			}
		}
		if(i==5)
			cout <<  p+1 << " " << n[p]+1 << " " <<  m[p] << endl;
	}
	if(flag==5)
		cout << "not found" << endl;
	return 0;
}