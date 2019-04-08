int counter=0;
void Divide(int ,int ,int );
int main()
{
  int t,N,M;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  cin>>N>>M;
  counter=0;
  Divide(N,M,N);
  cout<<counter<<endl;
  }

  return 0;
}
void Divide(int n,int m,int s )
{
  if(s>=1)
  {
  for(int i=s;i>=1;i--)
  {   if(n-i==0)
     { 
      counter+=1;
     }
      else if(n-i>0&&m-1>0)
      Divide(n-i,m-1,i);
  }
  }
}     
      
