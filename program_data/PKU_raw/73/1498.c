int main()
{
	int a[5][5],i,j,m,n,l,k;
	k=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
	    for(j=0;j<5;j++)
		{
			m=i;n=j;
			l=(a[m][n]>=a[m][0])+(a[m][n]>=a[m][1])+(a[m][n]>=a[m][2])+(a[m][n]>=a[m][3])+(a[m][n]>=a[m][4]);
		    
	     	l=l+(a[m][n]<=a[0][n])+(a[m][n]<=a[1][n])+(a[m][n]<=a[3][n])+(a[m][n]<=a[4][n])+(a[m][n]<=a[2][n]);
		
	    	if(l==10)
			{
		    	cout<<m+1<<' '<<n+1<<' '<<a[m][n];k=0;
			}
		
		}

		
	}
	if(k==1)
		cout<<"not found";
	return 0;
}