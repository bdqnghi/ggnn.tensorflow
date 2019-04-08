
int main()

{  
	int n,i,a[20000],k,j=0;
	
	cin>>n;

	for(i=0;i<n;i++)
	{cin>>a[i];}
	
	cout<<a[0];

	for(i=1;i<n;i++)
	
	{
		for(k=0;k<i;k++)
	{
		
		if(a[i]==a[k]) {j=j+1;break;}
	}
		if(j==0) cout<<" "<<a[i];
		j=0;
	 
		
		
	}


	


	return 0;
}

