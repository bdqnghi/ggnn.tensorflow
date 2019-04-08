//************************************
//*  ?? ?:5_2.cpp                 *
//*  ?   ?:???                  *
//*  ????:2013.10.14             *
//*  ????:????               *
//************************************
int main()
{
  int n,m=0;
  cin>>n;
  if(n==0)
  cout<<"0"<<endl;
  else
  {
  for(int i=4;i>=0;i--)
  {
    if(floor(n/pow(10.0,i))!=0)
    {
      if(i>=m) 
      {                        
        m=i;
      }
     }
   }
   int p[m+2],q[m+1];
  for(int j=0;j<m+2;j++)
  {
     p[j]=n%(int)pow(10.0,j);
  }
   for(int k=0;k<m+1;k++)
   {
      q[k]=(p[m+1-k]-p[m-k])/(int)pow(10.0,m-k);
   }  
   for(int t=0;t<m+1;t++)
   {       
   cout<<q[m-t];
  }
  } 
   return 0;
}
