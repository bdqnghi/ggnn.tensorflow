
int main()
{
  int i,n;
  long sum;
  
  cin>>n;
  sum=0;//?????7????????
  for(i=1;i<=n;i++)
   if(i%7==0||i%10==7||i/10==7) sum+=i*i;
  sum=n*(n+1)*(2*n+1)/6-sum;
  cout<<sum;
  return 0;
}