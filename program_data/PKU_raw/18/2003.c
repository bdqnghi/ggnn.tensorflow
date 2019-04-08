int a[100][100];
int sum=0;
int minu(int x,int y)
{
	if(x<y)return x;
	else return y;
}
void del(int n)
{
	int i,m;
	int num[n];
	if(n==1){cout<<sum<<endl;return;}
	else{
	for(i=0;i<n;i++)
		{
		num[i]=a[i][0];
		for(m=0;m<n;m++)num[i]=minu(num[i],a[i][m]);
		if(num[i]!=0)
			for(m=0;m<n;m++)a[i][m]=a[i][m]-num[i];
		}								//???
	for(i=0;i<n;i++)
		{
		num[i]=a[0][i];
		for(m=0;m<n;m++)num[i]=minu(num[i],a[m][i]);
		if(num[i]!=0)
			for(m=0;m<n;m++)a[m][i]=a[m][i]-num[i];		//???
		}
	sum+=a[1][1];
	for(i=1;i<n-1;i++)
		for(m=0;m<n;m++)a[i][m]=a[i+1][m];
	for(i=1;i<n-1;i++)
		for(m=0;m<n;m++)a[m][i]=a[m][i+1];
	del(n-1);
	}
}
int main()
{
	int j,k;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];
	del(n);
	}
	return 0;
}