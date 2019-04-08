int main ()
{
    int n,m,YS; 
    cin>>n;//??n 
    if(n==1)cout<<"End";
    else
    {
        do
        {
           YS=n%2;//?????? 
           if(YS!=0)// ????????3?1
           {
                    m=n;
                    n=3*m+1;
                    cout<<m<<"*3"<<"+1="<<n<<endl; //?????? 
           }
           else// ?????????2
           {
               m=n;
               n=m/2;
               cout<<m<<"/2"<<"="<<n<<endl;//??????  
           }
         }while(n!=1);
         cout<<"End"; 
    }
cin.get();cin.get();cin.get();cin.get();    
return 0;   
} 