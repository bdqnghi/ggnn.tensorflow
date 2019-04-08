int main()//?????
{
	int n,k,a[1000],q=0,w=0;//???? ???
	cin>>n>>k;
	for(int i=0;i<n;i++)//????
	{
		cin>>a[i];
	}
	do
	{
		for (int i=q+1;i<n;i++)//?????
		{
			if (a[q]+a[i]==k) 
			{
				cout<<"yes";
				w++;
				break;
			}
		}
		q++;
	}
	while (w!=1 && q<n-1);
	if (w==0) cout<<"no";
	return 0;//????
}

