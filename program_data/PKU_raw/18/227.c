//1000012915???

int GL(int n,int a[][101]);           //????a[1][1]???
int Delete(int n,int a[][101]);       //???????????
int min(int a, int b);                //??????

int main()
{
	int Sum[101],n,a[101][101],i,j,k; //????????Sum

	cin>>n;                           //??n

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)              //????
		{
			for(k=0;k<n;k++)cin>>a[j][k];
		}

		Sum[i]=GL(n,a);               //????
	}

	for(i=0;i<n;i++)cout<<Sum[i]<<endl;//????
	return 0;
}

int GL(int n,int a[][101])
{
	int Sum,i,j,MIN;

	for(i=0;i<n;i++)                   //????????
	{
		MIN=a[i][0];
		for(j=1;j<n;j++)MIN=min(MIN,a[i][j]);
		for(j=0;j<n;j++)a[i][j]=a[i][j]-MIN;
	}

	for(j=0;j<n;j++)                    //?????????
	{
		MIN=a[0][j];
		for(i=1;i<n;i++)MIN=min(MIN,a[i][j]);
		for(i=0;i<n;i++)a[i][j]=a[i][j]-MIN;
	}

	Sum=a[1][1];                         //????a[1][1]

	if(n!=2)                             //??
	{
		Delete(n,a);
		Sum=Sum+GL(n-1,a);
		return Sum;
	}

	else return Sum;                     //????
}


int min(int a, int b)                    //??????
{
	if(a>=b)return b;
	else return a;
}

int Delete(int n,int a[][101])           //???????????
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)a[i][j]=a[i][j+1];
		a[i][n-1]=0;
	}

	for(j=0;j<n-1;j++)
	{
		for(i=1;i<n-1;i++)a[i][j]=a[i+1][j];
		a[n-1][j]=0;
	}

	return 0;

}