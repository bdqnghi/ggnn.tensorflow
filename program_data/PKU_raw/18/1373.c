
int array[110][110],sum;

void dispose(int n);

int main()
{
	int n;
	cin >> n;
	int p=0;
	do
	{
		memset(array,0,sizeof(array));
		sum=0;
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				cin >> array[i][j];
		dispose(n);
		cout << sum << endl;
		p++;
	}while(p<n);
	return 0;
}

void dispose(int n)
{
	int i,j;
	if(n==1)return ;
	for(i=0;i<n;i++)
	{
		int rowmin=array[i][0];
		for(j=1;j<n;j++)
			if(rowmin>array[i][j])
				rowmin=array[i][j];
		for(j=0;j<n;j++)
			array[i][j]-=rowmin;
	}
	for(i=0;i<n;i++)
	{
		int colmin=array[0][i];
		for(j=1;j<n;j++)
			if(colmin>array[j][i])
				colmin=array[j][i];
		for(j=0;j<n;j++)
			array[j][i]-=colmin;
	}
	sum+=array[1][1];
	for(i=1;i<n-1;i++)
		array[0][i]=array[0][i+1];
	for(i=1;i<n-1;i++)
		array[i][0]=array[i+1][0];
	for(i=1;i<n-1;i++)
		for(j=1;j<n-1;j++)
			array[i][j]=array[i+1][j+1];
	dispose(n-1);
}