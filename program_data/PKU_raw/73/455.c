int main()
{
	int a[5][5], i, k, l, m, n, flag;
	m=0;
	n=0;
	flag=0;
	for(i=0; i<5; i++)
	{
		for(k=0; k<5; k++)
		{
			cin >> a[i][k];
		}
	}
	for(i=0; i<5; i++)
	{
		for(k=0; k<4; k++)
		{
			if(a[i][k+1]>a[i][m])
				m=k+1;
		}
		for(l=0; l<5; l++)
		{
			if(a[l][m]<a[i][m])
			{	
				n=0;
				break;
			}
		    else n=1;
		}
		if(n==1) 
		{
			flag=1;
			cout << i+1 << " " << m+1 << " " << a[i][m] << endl;
		}
		m=0;
		
	}
	if(flag==0) cout << "not" << " " << "found" << endl;
	return 0;
}