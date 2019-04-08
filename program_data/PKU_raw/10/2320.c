
int main()
{
	int i,j,k,x[30],f[30],temp,max;
	cin >> k;
	for (i=0;i<k;i++)
		cin >> x[i];
	f[0]=1;
	for(i=1;i<k;i++)
	{
		max=1;
		for(j=0;j<i;j++)
		{
			temp =0;
			if(x[i]<=x[j])
				temp = f[j]+1;
			if(temp > max)
				max=temp;
		}
		f[i]=max;
	}
	max=1;
	for(i=0;i<k;i++)
	{
		if(f[i]>max)
			max=f[i];
	}
	cout << max << endl;
	return 0;
}
