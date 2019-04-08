




int main()

{

	int a[20000]={0},b[20000]={0},i,m,j,k;

	cin>>m;
		
	for(i=3;i<m;i=i+2)

	{

		a[i]=i;

		for(j=3;j<i;j=j+2)

		{

				if(i%j==0)
				a[i]=0;


		}

	}

	for(i=3;i<=m/2;i=i+2)
	if (a[i]==i&&a[m-i]==m-i)

	{

				cout<<a[i]<<" "<<a[m-i]<<endl;


	}
			return 0;
}