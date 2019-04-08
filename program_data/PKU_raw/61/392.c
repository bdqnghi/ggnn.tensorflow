int main()
{
	int n,a[100],k,q,w,e,i;
	cin>>n;
	k=0;
	while (k<n)//????????
	{
		cin>>a[k];
		k++;
	}
	i=0;
	while (i<n)//???????????
	{
	q=w=1;
	e=0;
	k=2;
	if (a[i]==1)//?????1,2?,???1 ????????a[i]?
		cout<<q<<endl;
	else if (a[i]==2)
		cout<<w<<endl;
	else
	{
		while (k<a[i])
	{
		e=q+w;
		q=w;
		w=e;
		k++;
	}
	cout<<e<<endl;
	}
	i++;
	}

	return 0;
}

