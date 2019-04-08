int main()
{
	int n,i,k,j,t=0,s,m;
	cin>>n;
	int J[100000];
	for ( i=0 ; i<n ; i++)
	{cin>>J[i];}
	cin>>k;
	for ( j=0 ; j<n-t ; j++)
	{
        if (J[j]!=k) 
		  continue;
		t++;
		for ( s=j+1 ; s<=n-t; s++)
		{J[s-1]=J[s];}j--;
	}
	for ( m=0 ; m<n-t-1 ; m++)
         cout<<J[m]<<" ";
	cout<<J[n-t-1]<<endl;
	return 0;
}
	