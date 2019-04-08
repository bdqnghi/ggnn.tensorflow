int main()
{
 int n,k,a[100000],i,j,l,m;
 int s=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cin>>k;
 for(l=0;l<n;l++)
 {
   if(a[l]==k)
   {
    s++;
    for(j=l;j<n;j++)
    {
     a[j]=a[j+1];
    }
   l--;
   n--;
   }
 }
 for(m=0;m<n-1;m++)
 {
  cout<<a[m]<<" ";
 }
 cout<<a[n-1]<<endl;
    return 0;
}