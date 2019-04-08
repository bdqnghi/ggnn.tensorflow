

int main()
{
  int n,k,i,temp;
  cin>>n>>k;
  int applestay;
  i=0;
  for(applestay=n-1;i<n;applestay=applestay+(n-1))
  {
  i=0;
  temp=applestay;
   for(;i<n;i++)
    {if(n*temp%(n-1)!=0) break;
      temp=n*temp/(n-1)+k;}
  }
 cout<<temp;
return 0;
}