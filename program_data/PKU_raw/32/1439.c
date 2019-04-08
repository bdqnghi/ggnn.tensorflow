
char a[100],b[100];int c[100];

int main()
{
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    int n;
    cin>>n;
    while(n--)
    {
              cin>>a>>b;
              int lena=strlen(a);
              int lenb=strlen(b);
              for(int i=0;i<lena/2;i++)
               {
                      char t=a[i];
                      a[i]=a[lena-1-i];
                      a[lena-1-i]=t;
               }
               for(int i=0;i<lenb/2;i++)
               {
                      char t=b[i];
                      b[i]=b[lenb-1-i];
                      b[lenb-1-i]=t;
               }
               for(int i=0;i<lenb;i++)
               c[i]=a[i]-b[i];
               for(int i=lenb;i<lena;i++)
               c[i]=a[i]-'0';
               for(int i=0;i<lena-1;i++)
                 if(c[i]<0) {
                              c[i]=10+c[i];
                              c[i+1]-=1;
                            }
               for(int i=lena-1;i>=0;i--)
               {
                       if(c[i]!=0)
                       {
                                  for(int j=i;j>=0;j--)
                                  cout<<c[j];
                                  cout<<endl;
                                  break;
                       }
               }
    }
    return 0;
}
               
               
              
              
