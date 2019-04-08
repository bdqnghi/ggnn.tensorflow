void f(char a[],char b[],char * p)
{
     int m,n;
     m=strlen(a);
     n=strlen(b);
     for (int i=0;i<m;i++)
     {
         if (b[n-1-i]-a[m-1-i]>=0)
         p[n-1-i]=b[n-1-i]-a[m-1-i]+'0';
         else
         {
             p[n-1-i]=b[n-1-i]-a[m-1-i]+'0'+10;
             b[n-2-i]--;
         }
     }
     p[n]=0;
for(int i=0;i<n-m;i++)
            p[i]=b[i];
     if(p[0]=='0'&&p[1]!=0)
     {
                  for(int i=0;i<n+1;i++)
                  p[i]=p[i+1];
     }
     
}
int main()
{
    int n,i;
    scanf ("%d",&n);
    getchar();
    for(i = 0;i<n;i++)
    {
    char a[101];
    char b[101];
    char c[101];
    gets(a);
    gets(b);
    f(b,a,c);
    printf("%s\n",c);
    getchar();
    }
}
