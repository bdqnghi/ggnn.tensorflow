int main()
{
	int n,k,i;
	cin>>n;//??n 
	int a[n];
	for(i=0;i<n;i++)//??a[n] 
		cin>>a[i];
	cin>>k;//??????? 
	int m=0,j;
	for(i=0;i<n-m;i++)
		if(a[i]==k)
			{for(j=i;j<(n-1-m);j++)
				a[j]=a[j+1];
				m++;
	           i--;}
				
	for(i=0;i<(n-m-1);i++)
		cout<<a[i]<<' ';
cout<<a[n-m-1];
  cin.get(); cin.get(); cin.get();
	return 0;
}