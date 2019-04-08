int a[1001][1001];
int r[1001],c[1001],s=0;
void f(int n)
{   
	for(int i=0;i<n;i++)
    {
		r[i]=a[i][0];
		for(int j=0;j<n;j++)
		if(a[i][j]<r[i])r[i]=a[i][j];
		for(int j=0;j<n;j++)
		a[i][j]-=r[i];
	}
	for(int i=0;i<n;i++)
    {
		r[i]=a[0][i];
		for(int j=0;j<n;j++)
		if(a[j][i]<r[i])r[i]=a[j][i];
		for(int j=0;j<n;j++)
		a[j][i]-=r[i];
	}
	s+=a[1][1];
	if(n==2){cout<<s<<endl;return;}
	for(int i=1;i<n-1;i++)
	for(int j=0;j<n;j++)
		a[i][j]=a[i+1][j];
   for(int i=1;i<n-1;i++)
	for(int j=0;j<n-1;j++)
		a[j][i]=a[j][i+1];
		f(n-1);
}
		
int main()
{int n;
	cin>>n;
	int t=n;
	while(t--)
	{  s=0;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
		f(n);
	}
	

}
