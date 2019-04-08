
char a[200],b[200];
int alen;

void init(); 
void minus();
void output();

int main()
{
    int n,i;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        init();
        minus();
        output();
    }
}

void init()
{
     int len1,len2,temp,i;
     alen=len1=strlen(a);
     for (i=0;i<(len1+1)/2;i++)
     {
         temp=a[i];
         a[i]=a[len1-i-1];
         a[len1-i-1]=temp;
     }
     for (i=0;i<len1;i++)
     {
         a[i]-='0';
     }
     len2=strlen(b);
     for (i=0;i<(len2+1)/2;i++)
     {
         temp=b[i];
         b[i]=b[len2-i-1];
         b[len2-i-1]=temp;
     }
     for (i=0;i<len2;i++)
     {
         b[i]-='0';
     }
     for (i=len2;i<len1;i++)
     {
         b[i]=0;
     }
}

void minus()
{
     int p,len,tp;
     p=0;
     while (p<alen)
     {
           if (a[p]>=b[p])
           {
                a[p]-=b[p];
           }
           else if (a[p]<b[p])
           {
                tp=p+1;
                while (a[tp]==0)
                {
                      a[tp]=9;
                      tp++;
                }
                a[tp]--;
                a[p]=a[p]+10-b[p];
           }
           p++;
     }
}

void output()
{
     int len,i,t;
     while (a[alen]==0)
     {
           if (alen==0)
           {
              cout<<0<<endl;     
              return;
           }
           alen--;
     }
     for (i=alen;i>=0;i--)
     {
         t=a[i];
         cout<<t;
     }
     cout<<endl;
}
