int a[100][100];
int mi=0;
int n;
int sum=0;
void del(int n)
{
	int i,j;
	for(i=2;i<n;i++)
		a[0][i-1]=a[0][i];
	for(j=2;j<n;j++)
		a[j-1][0]=a[j][0];
	for(i=2;i<n;i++)
		for(j=2;j<n;j++)
			a[i-1][j-1]=a[i][j];
}
int sub(int n)
{
	int i,j;
	if(n>=2)
	{for(i=0;i<n;i++)
		{mi=a[i][0];
		for(j=0;j<n;j++)
			if(a[i][j]<mi)
				mi=a[i][j];
		for(j=0;j<n;j++)
			a[i][j]-=mi;}

	for(i=0;i<n;i++)
			{mi=a[0][i];
			for(j=0;j<n;j++)
				if(a[j][i]<mi)
					mi=a[j][i];
			for(j=0;j<n;j++)
				a[j][i]-=mi;}

	sum+=a[1][1];					//??a[1][1]??
	del(n);							//???????n??????????
	sub(n-1);
	}
	else
	{return sum;}
}

int main()
{
	int sub(int);
	int i,j;
	cin>>n;
	for(int k=1;k<=n;k++){
	for( i=0;i<n;i++)
		for( j=0;j<n;j++)
			cin>>a[i][j];
	sub(n);
	cout<<sum<<endl;
sum=0;
	}
	return 0;
}