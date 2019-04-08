void sort(int a[],int n);
int main()
{
    int m,n,i,j,a[100],b[100];
	cin>>m>>n;
	for (i = 0; i<m; i++) {     
		scanf("%d",&a[i]);
	}
	sort(a,m);	
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	sort(b,n);
    for(i = 0;i < m;i++)
	cout<<a[i]<<" ";
	for(j=0;j<n-1;j++)
	cout<<b[j]<<" ";
	cout<<b[n-1];
	return 0;
}
void sort(int a[],int n)
{
 int i,j,index,temp;

 for(i=0;i<n-1;i++)
 {

  index=i;
  for(j=i+1;j<n;j++)
  {
   if(a[index]>a[j])
    index=j;
  }
        temp=a[i];
  a[i]=a[index];
  a[index]=temp;
 }
}
    