



int main()

{

	int a[100]={0},b[100]={0},x,y,i,j;

	cin>>x>>y;

	a[1]=x;

	b[1]=y;
	
	for(i=1;a[i]>=1;i++)

	{

		a[i+1]=a[i]/2;

	}

	for(j=1;b[j]>=1;j++)

	{

		b[j+1]=b[j]/2;

	}

	int m,n,panduan=0;

	for(m=1;m<=i-1;m++)

	{

		for(n=1;n<=j-1;n++)

		{

			if(a[m]==b[n])

			{

				panduan=1;

					break;

			}

		}

		if(panduan==1)

			break;

	}

	cout<<a[m];

	return 0;

}



