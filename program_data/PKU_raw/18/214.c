

/*????????  ??*/
int a[100][100][100];             //???????????n?n*n??
int matrix(int a[][100],int n)    //??????????a[1][1]???
{
      int temp1[100],temp2[100];//temp1?????????temp2????????

      int i,j;
	for(i=0;i<n;i++)        //?temp1??
	{
		    temp1[i]=a[i][0];
		    for(j=0;j<n;j++)
		    {
				if(temp1[i]>a[i][j])
				temp1[i]=a[i][j];
		     }
	 }
	for(i=0;i<n;i++)
	          for(j=0;j<n;j++)
                   a[i][j]=a[i][j]-temp1[i];   //???????????????
         for(i=0;i<n;i++)        //?temp2??
         {
		temp2[i]=a[0][i];
		for(j=0;j<n;j++)
		{
				if(temp2[i]>a[j][i])
				temp2[i]=a[j][i];
		}
	 }
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		a[j][i]=a[j][i]-temp2[i];   //???????????????

	int sum;
		sum=a[1][1];                //??sum?????a[1][1]
	for(i=1;i<n-1;i++)                   //????????
		a[0][i]=a[0][i+1];
	for(j=1;j<n-1;j++)
		a[j][0]=a[j+1][0];
	for(i=1;i<n-1;i++)
		for(j=1;j<n-1;j++)
			a[i][j]=a[i+1][j+1];
	if(n>2)                              //??n>2,????????
	{		
		sum=sum+matrix(a,n-1);
	}
return sum;                                   //??sum?
}
int main()
{
	int n,i,j,k;
	cin>>n;                              //??n?n*n??
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[i][j][k];
	for(i=0;i<n;i++)
		cout<<matrix(a[i],n)<<endl; //?????
	return 0;
}