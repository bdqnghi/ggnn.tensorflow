int main()
{
	int a[10000],b[10000],i,j,k,s[10000]={0},q,maxr,p,mint,maxt,x,y;
	char c;
	for (i=0;;i++)
	{
		cin>>a[i];
		if ((c=cin.get())=='\n')
		break;
	}
	for (j=0;;j++)
	{
		cin>>b[j];
		if ((c=cin.get())=='\n')
			break;
	}
	mint=a[0];
	for (x=1;x<=i;x++)
	{
		if (a[x]<mint)
			mint=a[x];
	}
	maxt=b[0];
	for (y=1;y<=i;y++)
	{
		if (b[y]>maxt)
			maxt=b[y];
	}
	for (k=mint;k<=maxt-1;k++)
	{
		for (p=0;p<=i;p++)
		{
			if (k>=a[p]&&k<b[p])
				s[k]=s[k]+1;
		}
	}
	maxr=s[mint];
	for (q=mint+1;q<=maxt-1;q++)
	{
		if (maxr<s[q])
			maxr=s[q];
	}
	cout<<i+1<<" "<<maxr<<endl;
	return 0;
}