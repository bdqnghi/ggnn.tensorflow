int main()
	{
	int n,i=0,A[50][105]={0},B[50][105]={0},k,j;
	char a[50][105],b[50][105];
	cin>>n;
	while(i<n)
		{ 
		cin.get();
		cin>>a[i];
		cin.get();
		cin>>b[i];
		cin.get();
		k=0;
		j=0;
	for(k=strlen(a[i])-1; k>=0;k--)
		{
		A[i][j]=a[i][k]-'0';
		j++;
		}
	     j=0;
	for(k=strlen(b[i])-1;k>=0;k--)
		{
		B[i][j]=b[i][k]-'0';
		j++;
		}
		for(j=0;j<105;j++)
			{
			A[i][j]=A[i][j]-B[i][j];
			if(A[i][j]<0)
				{
			A[i][j]=A[i][j]+10;
			A[i][j+1]=A[i][j+1]-1;
				}
			}
		j=104;
		while(A[i][j]==0)
			j--;
			for(k=j;k>=0;k--)
				cout<<A[i][k];
			 cout<<endl;
			 i++;
			 }
	return 0;
	}