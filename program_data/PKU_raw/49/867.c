int main()
{
	char a[520];
	int i,j,k,l,p,n;
	cin >> a ;
	n=strlen(a);
	for(j=1;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			k=j;p=i;
			if (a[p]==a[p+k] && k==1) {cout << a[p] << a[p+1] << endl;}
			if (a[p]==a[p+k] && k>1)
			{
		    	while(a[p]==a[p+k]&&k>1)
			   {
			    	p++;k=k-2;
		    	}
		    	if(k<2&&a[p]==a[p+k])
		    	{
			    	for(l=i;l<=i+j;l++)
					{
						cout << a[l] ;
					}
					cout <<endl;
		    	}
			}
		}
	}
	return 0;
}
