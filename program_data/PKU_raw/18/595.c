int main()
{
	int n,k,i,j,a[200][200],x,p,q,min,sum;
	cin>>n;
	for (k=1;k<=n;k++)
	{
		sum=0;
		for (i=1;i<=n;i++)
		 for (j=1;j<=n;j++)
		 {
			 cin>>a[i][j];
		 }
	for (x=n;x>=2;x--)
	 {
		for (p=1;p<=x;p++)
		{
		 min=10000;
		 for (q=1;q<=x;q++)
		  if (min>=a[p][q]) min=a[p][q];
		 for (q=1;q<=x;q++)
		 a[p][q]=a[p][q]-min;
		}
		for (q=1;q<=x;q++)
		{
		min=10000;
		for (p=1;p<=x;p++)
		 if (min>=a[p][q]) min=a[p][q];
		for (p=1;p<=x;p++)
		 a[p][q]=a[p][q]-min;
		}
		sum=sum+a[2][2];
		for (p=1;p<=x;p++)
		 for (q=2;q<=x-1;q++)
		 a[p][q]=a[p][q+1];
		for (q=1;q<=x-1;q++)
		 for (p=2;p<=x-1;p++)
			a[p][q]=a[p+1][q];
	 }
	cout<<sum<<endl;
	}
	return 0;
}
