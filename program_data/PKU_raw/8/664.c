int m,n;
int a[100],b[100];
void getarr(void)
{
int i;
cin>>m>>n;
for(i=1;i<=m;i++)
  cin>>a[i];
for(i=1;i<=n;i++)
  cin>>b[i];
}
void sortarr(void)
{
int i,j,p;
for(i=1;i<m;i++)
  for(j=1;j<=m-i;j++)
     if(a[j]>a[j+1])
        {
		p=a[j];
		a[j]=a[j+1];
		a[j+1]=p;
		}
for(i=1;i<n;i++)
  for(j=1;j<=n-i;j++)
     if(b[j]>b[j+1])
        {
		p=b[j];
		b[j]=b[j+1];
		b[j+1]=p;
		}
}
void combarr(void)
{
int i;
for(i=m+1;i<=m+n;i++)
    a[i]=b[i-m];
}
void printarr(void)
{
int i;
for(i=1;i<=m+n-1;i++)
   cout<<a[i]<<" ";
cout<<a[i];
}
int main()
{
getarr();
sortarr();
combarr();
printarr();
return 0;
}