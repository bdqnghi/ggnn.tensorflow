void nixu( int k );
int main()
{
    int n;
    cin>>n;
     nixu(n);
    return 0;
    }
    void nixu (int k)
    {
      if(k>0)
        {
         cout<<k%10;k/=10; 
         nixu (k);    
             }   
         }