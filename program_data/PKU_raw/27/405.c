int main()                                      //??? 
{                                               //????? 
    int n,i;
    double a,b,c,x1,x2,d,p,q;                   //???? 
    cin>>n;
    for(i=0;i<n;i++)                            //n??? 
    {                                           //???? 
          cin>>a>>b>>c;                         //?? a,b,c 
          d=b*b-4*a*c;         
          p=-b/(2*a);
          q=sqrt(abs(d));                       //????????? 
          if(d<0)                               //?  d<0 
          {                                    //?? d ? 0 ????? 
                cout<<fixed<<setprecision(5)<<"x1="<<p+1-1<<"+"<<q/(2*a)<<"i"
                    <<";"<<"x2="<<p+1-1<<"-"<<q/(2*a)<<"i"<<endl;
          }
          else                                  
          {
              if(d==0)                             //? d=0 
              {
                     cout<<fixed<<setprecision(5)<<"x1=x2="<<p+1-1<<endl;
              }          
              else                                  //? d>0 
              {
                  cout<<fixed<<setprecision(5)<<"x1="<<p+1-1+q/(2*a)<<";"<<"x2="<<p+1-1-q/(2*a)<<endl;
              }
          } 
    }     
     return 0;
}                                                   //????? 
           
