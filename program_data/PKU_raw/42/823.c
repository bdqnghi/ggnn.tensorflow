int main ()
{
	int a[100000]={0},n,k,i=0,j,l=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(j=0;j<n;j++)
	{
		if(a[j]==k)continue;
		else
		{
			l++;
			if(l==1)
			{
				cout<<a[j];
			}
			else
			{
				cout<<" "<<a[j];
			}
		}
	}





















	return 0;
}