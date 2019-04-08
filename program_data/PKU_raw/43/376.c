int main()
{
    int k , m ,i ,a ,j,s,u;
    cin>>m;
    for(k=3;k<=m/2;k++)
    {
                     s=u=0;
                     for(i=2;i<=sqrt(k);i++)
                     {
                                        if(k%i==0)
                                        s=s+1;
                                        }
                                        if(s==0)
                                        {
                                                a=m-k;
                                                for(j=2;j<=sqrt(a);j++)
                                                {
                                                         if(a%j==0)
                                                         u=u+1;  
                                                         }
                                                         if(u==0)
                                                         cout<<k<<' '<<a<<endl;                                  
                                                         }
                                                         }
                                                    
                                                         return 0;
                                                         }
                                        
                                        
