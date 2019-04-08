int main ()
{
    int n,i;
    cin >>n;
    float a[n][3];
    double d,x,y;
    i=1;
    while (i<=n)
    {
          cin >>a[i][1]>>a[i][2]>>a[i][3];
          i++;
    }
    i=1;
    while (i<=n)
    {
          d=a[i][2]*a[i][2]-4*a[i][1]*a[i][3];
          if (d==0)
          {
                   x=-a[i][2]/(2*a[i][1]);
                   cout <<fixed<<setprecision(5)<<"x1=x2="<<x<<endl;
          }
          if (d>0)
          {
                   x=(-a[i][2]+sqrt(d))/(2*a[i][1]); 
                   y=(-a[i][2]-sqrt(d))/(2*a[i][1]);
                   cout <<fixed<<setprecision(5)<<"x1="<<x<<";x2="<<y<<endl;
          }
          if (d<0)
          {
                   x=-a[i][2]/(2*a[i][1]);
                   y=sqrt(-d)/(2*a[i][1]);
                   if (x==-0)
                   {
                          x=0;
                   }
                   cout <<fixed<<setprecision(5)<<"x1="<<x<<"+"<<y<<"i;x2="<<x<<"-"<<y<<"i"<<endl;
          }
          i++;
    }
    return 0;
}
    
                           
          
          
