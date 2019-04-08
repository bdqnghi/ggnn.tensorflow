int main()
{
   int n,a[20000],b[101]={0},i,num=0;
   cin >> n;
   for(i=0;i<n;i++)
    cin >> a[i];
   for(i=0;i<n;i++)
  {
    b[a[i]]++;
    if (b[a[i]]==1)
{
    num++;
    if(num==1)
    cout<<a[i] ;
    if(num!=1)
    cout<<" "<<a[i];
}
   }
  return 0;
}

   