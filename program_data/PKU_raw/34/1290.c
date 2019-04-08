int main()
{  
  int n;//?????
  int temp;//??????
  cin>>n; 
  while (n!=1)
    {
      if (n % 2==0) 
        {
          temp=n / 2;
          cout<<n<<"/"<<"2"<<"="<<temp<<endl;    
        }  
      if (n % 2!=0)
        {
          temp=n*3+1;
          cout<<n<<"*"<<"3"<<"+"<<"1"<<"="<<temp<<endl;    
        } 
      n=temp; 
    } 
  if (n=1) cout<<"End"; 
  
  return 0; 
} 