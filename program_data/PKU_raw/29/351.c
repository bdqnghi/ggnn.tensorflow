float sum (int n)
{
      float j,s;
      int i;
      float a[1000],b[1000];
      a[1]=2;a[2]=3;
      b[1]=1;b[2]=2;
      if (n==1)
      {j=2;
      return j;}
      if (n==2)
      {j=3.5;
      return j;}
      if (n!=1 && n!=2)
      {
          s=3.5;
          for (i=3;i<=n;i++)
          {
            a[i]= a[i-1]+a[i-2];
            b[i]= b[i-1]+b[i-2];
            s=s+(a[i]/b[i]);
          }
          return s;
      }
}  
int main ()
{
    int m,x;
    scanf ("%d",&m);
    for (x=0;x<m;x++)
    {
        int n;
        scanf ("%d",&n);
        printf ("%.3f\n",sum(n));
    }
    getchar ();
    getchar ();
}
        
        
    
