



int main()

{

	
	int a[100][3]={0},b[100]={0},i,n,sum=0;

	cin>>n;
	
	for(i=0;i<n;i++)

	{

		a[i][0]=i+1;

		a[i][1]=a[i][0]%10;

		a[i][2]=a[i][0]/10;

	}

	for(i=0;i<n;i++)

	{

		if(a[i][0]%7!=0&&a[i][1]!=7&&a[i][2]!=7)

			b[i]=a[i][0];

	}

	for(i=0;i<n;i++)

		sum=sum+b[i]*b[i];

	cout<<sum;



	return 0;

}