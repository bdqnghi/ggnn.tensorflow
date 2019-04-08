int main()
{
    int n;
    int i;
    cin>>n;
    double a,b,c;
    for(i=1;i<=n;i++) 
    { 
                      cin>>a>>b>>c;
                      if(b*b-4*a*c>=0)
                      {
                      
                                      double x1,x2;
                                      x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
                                      x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
                                      if(x1 == x2) printf("x1=x2=%.5f\n", x1); 
                                      else  printf("x1=%.5f;x2=%.5f\n" ,x1,x2);
                      }
                      else
                      {
                          double x11,x12,x21,x22;
                          x11=(-b)/(2*a);
                          x12=+sqrt(-b*b+4*a*c)/(2*a);
                          x21=(-b)/(2*a);
                          x22=-sqrt(-b*b+4*a*c)/(2*a);
                          if(b==0)  printf("x1=0.00000+%.5fi;x2=0.00000%.5fi\n",x12,x22);
                          else      printf("x1=%.5f+%.5fi;x2=%.5f%.5fi\n",x11,x12,x21,x22);
                      }
    }
    return 0;
}