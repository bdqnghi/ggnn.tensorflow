int main()
{
int n;
cin>>n;
for(;n!=1;)
  {
  if(n%2==1)
    {
    cout<<n<<"*3+1="<<n*3+1<<endl;
    n=n*3+1;   
    }       
  else
    {
    cout<<n<<"/2="<<n/2<<endl;
    n=n/2;        
    } 
  }
cout<<"End";
cin.get();
cin.get();
return 0;
}