void f(char a[],char b[],char * p)
{
     int m,n;
     m=strlen(a);
     n=strlen(b);
     if(n>m)
     {
            for(int i=0;i+m<n;i++)
            p[i]=b[i];
     }
     p[n-m]='0';
     for (int i=0;i<m;i++)
     {
         if (a[m-1-i]+b[n-1-i]-'0'-'0'<10)
         p[n-i]=a[m-1-i]+b[n-1-i]-'0';
         else
         {
             p[n-i]=a[m-1-i]+b[n-1-i]-'0'-10;
             b[n-2-i]++;
         }
     }
     if(a[0]+b[n-m]-'0'-'0'>=10)
     p[n-m]++;
     p[n+1]=0;
     if(p[n-m]=='0')
     {
                  for(int i=n-m;i<n;i++)
                  p[i]=p[i+1];
                  p[n]=0;
     }
     else if(n>m)
     {
                  for(int i=n-m;i<n;i++)
                  p[i]=p[i+1];
                  p[n]=0;
                  for(int i=0;i<n-m;i++)
                  {
                          if(p[n-m-1-i]<'9')
                          {
                                          p[n-m-1-i]++;
                                          break;
                          }
                          else
                          p[n-m-1-i]='0';
                  }
     }
     if(p[0]=='0'&&p[1]!=0)
     {
                  for(int i=0;i<n+1;i++)
                  p[n+1-i]=p[n-i];
                  p[0]='1';
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