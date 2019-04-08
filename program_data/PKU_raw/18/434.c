int a[100][100];
int t=0;
int sum(int n,int a[100][100])
{
	if( n==1)return 1; 
	int i,j,k,min;
	for(j=0;j<n;j++)
		{
			min=a[j][0];
			for(k=1;k<n;k++)
			{
				if(a[j][k]<min)min=a[j][k];
			}
			for(k=0;k<n;k++)
			{
				a[j][k]-=min;//????
			}
		}
     for(j=0;j<n;j++)
		{
			min=a[0][j];
			for(k=1;k<n;k++)
			{
				if(a[k][j]<min)min=a[k][j];
			}
			for(k=0;k<n;k++)
			{
				a[k][j]-=min;
			}
		}//????
	     
		 t+=a[1][1];//??????
		 for(i=0;i<n;i++)
		 {
			 for(j=1;j<n-1;j++)
			 {
				 a[i][j]=a[i][j+1];
				 
			 }
		 }
        for(i=1;i<n-1;i++)
		 {
			 for(j=0;j<n-1;j++)
			 {
				 a[i][j]=a[i+1][j];
			 }
		}//??

		sum(n-1,a);
		 return t;
	 
}




int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)

		{
			for(k=0;k<n;k++)
			{
				cin>>a[j][k];
			}
		}
		cout<<sum(n,a)<<endl;
		t=0;
	}
	return 0;
}
