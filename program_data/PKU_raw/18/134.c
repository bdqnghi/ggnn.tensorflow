//------------------------
//   ?????????
//      2010/12/5
//        ADE
//------------------------



int GuiLing(int a[][101],int n,int sum)
{
	int min,i,j;
	for(i=0;i<n;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
			min=(min<a[i][j])?min:a[i][j];
		for(j=0;j<n;j++)
			a[i][j]-=min;
	}  //???
	for(j=0;j<n;j++)
	{
		min=a[0][j];
		for(i=0;i<n;i++)
			min=(min<a[i][j])?min:a[i][j];
		for(i=0;i<n;i++)
			a[i][j]-=min;
	}  //???
	if(n>2) //????2*2
	{
		sum=sum+a[1][1];
		for(i=2;i<n;i++)
			for(j=0;j<n;j++)
				a[i-1][j]=a[i][j];   //??????
		for(j=2;j<n;j++)
			for(i=0;i<n-1;i++)
				a[i][j-1]=a[i][j];  //??????
		return GuiLing(a,n-1,sum);
	}
	else return sum+a[1][1];
}

int main()
{
	int n,i;
	int a[101][101];
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				cin>>a[j][k];
		cout<<GuiLing(a,n,0)<<endl;
	}
	return 0;
}