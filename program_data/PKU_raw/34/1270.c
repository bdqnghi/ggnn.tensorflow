int main()
{
    int n,p;//???????n???????????p 
    cin>>n;//??n 
    while(n>1)
    {
          if(n%2==0)//??n??????? 
          {
              p=n/2;
              cout<<n<<"/2"<<"="<<p<<endl;//????? 
              n=p;//?p????n 
          }
          else
          {
                p=n*3+1;
                cout<<n<<"*3"<<"+1"<<"="<<p<<endl;//????? 
                n=p;
          }
     }
     cout<<"End"<<endl;
     return 0;
}
          