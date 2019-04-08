int main()
{

	int a[100]={0},m,n,k,i;

	cin>>n>>k;

	a[n]=n+k;
	
	for(a[n]=n+k;;a[n]=a[n]+n)

	{
	
	 for(i=n;i>=2;i--)

	 {
		 
		 if(a[i]%(n-1)!=0)

			break;
		
		a[i-1]=a[i]*n/(n-1)+k;

	 }

     if(a[1]==0)

		 continue;

	 else

		 break;

	}

	cout<<a[1];

	return 0;

}