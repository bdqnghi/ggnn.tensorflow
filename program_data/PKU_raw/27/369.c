int main()
{
    int n,i;
    double x1,x2,a,b,c;

    cout<<fixed<<setprecision(5);
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
                     cin>>a>>b>>c;
                     
                     if(b*b==4*a*c)
                     {
                              x1=-b/(2*a);
                              cout<<"x1=x2="<<x1<<endl;
                              }
                     else 
                     
                        if (b*b>4*a*c)
                        {
                              x1=(-b+sqrt(b*b-4*a*c))/(2*a);
                              x2=(-b-sqrt(b*b-4*a*c))/(2*a);
                              cout<<"x1="<<x1<<";x2="<<x2<<endl;
                        }
                        else
                              {
                              if(b!=0)
                                       {
                                        cout<<"x1="<<-b/(2*a)<<"+"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<";x2="<<-b/(2*a)<<"-"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<endl;
                                        }
                              else
                                        {
                                        cout<<"x1="<<b/(2*a)<<"+"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<";x2="<<b/(2*a)<<"-"<<sqrt(4*a*c-b*b)/(2*a)<<"i"<<endl;
                                        }
                              
                                        
                              }
    }
    return 0;
}
    
