int main()
{
    int k,a,i;
    cin>>a;
    if(a==1)
    cout<<"End"<<endl;
    if(a!=1)
    {for(i=0;a!=1;i++)
     {
         
         if (a%2==1)
           {
                    k=a*3+1;
                    cout<<a<<"*"<<"3"<<"+"<<"1"<<"="<<k<<endl;
           }
         else
           {
                    k=a/2;
                    cout<<a<<"/"<<"2"<<"="<<k<<endl;
           }
           a=k;
         if(k==1)
         {cout<<"End"<<endl;
         break;}
         
     }
    }
    return 0;
}