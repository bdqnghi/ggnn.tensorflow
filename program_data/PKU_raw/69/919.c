int f(char a[],char b[],char * p)
{
     int m,n,N=0;
     m=strlen(a);
     n=strlen(b);
     for (int i=0;i<m;i++)
     {
         if (a[m-1-i]+b[n-1-i]-'0'-'0'<10)
         p[n-1-i]=a[m-1-i]+b[n-1-i]-'0';
         else
         {
             p[n-1-i]=a[m-1-i]+b[n-1-i]-'0'-10;
             if(n-2-i>=n-m)
             b[n-2-i]++;
             else
             N=1;
         }
     }
     if (N==0)
     {
              for(int i=0;i<n-m;i++)
              p[i]=b[i];
              p[n]=0;
     }
     else
     {
                  if(m==n)
                  {
                          for(int i=0;i<n;i++)
                          p[n-i]=p[n-1-i];
                          p[0]='1';
                          p[n+1]=0;
                  }
                  else
                  {
                      for(int i=0;i<n-m;i++)
                      {
                          if(b[n-m-1-i]<'9')
                          {
                              b[n-m-1-i]++;
                              break;
                          }
                          else
                          {
                              b[n-m-1-i]='0';
                              N=2;
                          }
                      }
                      if(N==1)
                      {
                          for(int i=0;i<n-m;i++)
                          p[i]=b[i];
                          p[n]=0;
                      }
                      else
                      {
                          p[0]='1';
                          for(int i=0;i<m;i++)
                          p[n-i]=p[n-1-i];
                          for(int i=0;i<n-m;i++)
                          p[i+1]=b[i];
                          p[n+1]=0;
                      }
                  }
                  
     } 
}
int main()
{
    char a[260];
    char b[260];
    char c[260];
    gets(a);
    gets(b);
    
    int m,n,i;
    m=strlen(a);
    n=strlen(b);
    while(a[0]=='0'&&a[1]!=0)
    {
                 for(int j=0;j<m;j++)
                 a[j]=a[j+1];
                 m--;
                 a[m]=0;
    }
    while(b[0]=='0'&&b[1]!=0)
    {
                 for(int j=0;j<n;j++)
                 b[j]=b[j+1];
                 n--;
                 b[n]=0;
    }
    if(m>n)
    f(b,a,c);
    else
    f(a,b,c);
    printf("%s\n",c);
}