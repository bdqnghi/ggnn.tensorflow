int main()
{
  int i,j,n,max=0,a[2000],b[2000];
  for(i=1; ;i++)
   {
    cin>>a[i];
    if(cin.get()=='\n') break;
   }
  for(j=1;j<=i;j++)
   {
   cin>>b[j];
   cin.get();
   }
   n=i;
  for(i=0;i<=999;i++)
   {
    int s=0;
    for(j=1;j<=n;j++)
     {
       if(a[j]<=i&&i<b[j])
         s=s+1;
     }
   if(s>max)
     max=s;
   }
 cout<<n<<" "<<max;
 return 0;
}
  
  
    