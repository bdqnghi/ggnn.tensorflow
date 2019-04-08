int main()
{
int n,a[500]={0},i,j,m=0,b[500]={0},k,sum=0;
cin>>n;
for(i=1;i<=n;i++)
	{
	cin>>a[i];
	}

for(j=1;j<=499;j=j+2)
	{
	for(i=1;i<=n;i++)
		{
	if(a[i]==j)
		{
		m++;
        b[m]=j;
		}
		}
	}
for(k=1;k<m;k++)
cout<<b[k]<<",";
cout<<b[m];
return 0;

}
	