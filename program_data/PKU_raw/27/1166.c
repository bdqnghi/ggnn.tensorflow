int main()
{
     int n;
  float a,b,c,d,j,k;
  double x1,x2;
  char i;
  cin>>n;
  d=1;
  i='i';
  for(d=1;d<=n;d=d+1)
  {
   cin>>a>>b>>c;
   if(b*b-4*a*c>0)
   {
    x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
             x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
             cout<<fixed<<setprecision(5)<<"x1="<<x1<<fixed<<setprecision(5)<<";x2="<<x2<<endl;
   }
      if(b*b-4*a*c==0)
      {
       if(b==0)
       {
        x1=(b + sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
       }
       else
       {
        x1=(-b + sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
       }
      }
      if(b*b-4*a*c<0)
      {
       if(b==0)
       {

       j=0;
       k=sqrt(4*a*c-b*b)/(2*a);
          cout<<fixed<<setprecision(5)<<"x1="<<j<<"+"<<fixed<<setprecision(5)<<k<<i<<";x2="<<fixed<<setprecision(5)<<j<<"-"<<fixed<<setprecision(5)<<k<<i<<endl;
          }
       else
       {
        j=-b/(2*a);
        k=sqrt(4*a*c-b*b)/(2*a);
           cout<<fixed<<setprecision(5)<<"x1="<<j<<"+"<<fixed<<setprecision(5)<<k<<i<<";x2="<<fixed<<setprecision(5)<<j<<"-"<<fixed<<setprecision(5)<<k<<i<<endl;
       }
  }
  }
 return 0;
  }
