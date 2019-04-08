int sum;								//??????
int func(int a[100][100],int n);		//????
int main()
{
	int n,j,k,i;						//????????????
	int a[100][100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		memset(a,0,sizeof(a));			//?a???????0
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];			//??a
		sum=0;							//???sum?0
		cout<<func(a,n)<<endl;
	}
	return 0;
}
int func(int a[100][100],int n)
{
	int i,j,min,b[100][100];			//????????????????
	if(n<=1)
		return sum;						//????1?????????
	else								//??
	{
		for(i=0;i<n;i++)
		{
			min=a[i][0];				//???????
			for(j=0;j<n;j++)
				if(a[i][j]<min)
					min=a[i][j];
			for(j=0;j<n;j++)
				a[i][j]=a[i][j]-min;	//????????
		}
		for(i=0;i<n;i++)
		{
			min=a[0][i];
			for(j=0;j<n;j++)
				if(a[j][i]<min)
					min=a[j][i];		//??????
			for(j=0;j<n;j++)
				a[j][i]=a[j][i]-min;	//?????????
		}
		sum+=a[1][1];					//??????a[1][1]??
		for(i=2;i<n;i++)
		{
			for(j=0;j<n-1;j++)
				b[i-1][j]=a[i][j+1];	//???-1
			for(j=0;j<n-1;j++)
				b[j][i-1]=a[j+1][i];	//???-1
		}
		for(j=1;j<n-1;j++)
			b[0][j]=a[0][j+1];
		for(j=1;j<n-1;j++)
			b[j][0]=a[j+1][0];
		b[0][0]=a[0][0];				//??a[0][0]
		func(b,n-1);					//?????
	}
}