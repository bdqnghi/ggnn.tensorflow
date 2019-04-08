int main()
{
    int n,i,a,b;
    cin>>n;
    if (n!=1)
    {                                     //??????n 
    if (n%2==0)
       {
        a=n/2;
        cout<<n<<"/"<<2<<"="<<a<<endl;          //?????? 
       }
    else
        {
         a=n*3+1;
         cout<<n<<"*"<<3<<"+"<<1<<"="<<a<<endl; //?????? 
        }
    for (i=1; ;i++)
        {
         if (a%2==0)
            {
             b=a/2;
             cout<<a<<"/"<<2<<"="<<b<<endl;     //?????? 
             a=b;
            }
         else 
              {
               b=a*3+1;
               cout<<a<<"*"<<3<<"+"<<1<<"="<<b<<endl;
               a=b;                                  //?????? 
              }
         if (a==1)
            break;                                   //????1?????? 
        }
    cout<<"End"<<endl;                               //??????End 
    }
    else 
         {
          cout<<"End"<<endl;
         }
    return 0;
}
