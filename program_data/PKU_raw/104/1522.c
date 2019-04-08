int main()
{
	int x[1000],y[1000],i,j,k,p,m;
	cin >> x[1] >> y[1];
	i=2;
	j=2;
	while(x[i-1]!=1)
	{
		x[i]=x[i-1]/2;
		i++;
	}
	while(y[j-1]!=1)
	{
		y[j]=y[j-1]/2;
		j++;
	}
	m=0;
	for(k=1;k<=i-1;k++)
	{
		if(m==0)
		{
		for(p=1;p<=j-1;p++)
		{
			if(y[p]==x[k])
			{
				cout << x[k];
				m=1;
				break;
			}
		}
		}
		else
			break;
	}
	return 0;
}

