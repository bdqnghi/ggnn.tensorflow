long int sum=0;
char a[10000];
long int c[10000];
int main()
{
    long int i,j,k,l,n,m,y=0,x,t=0;
    long int hhh(int q, int p); 
    char b[10000];                
    scanf("%d %s %d",&n,a,&x);
    l=strlen(a);
    for(i=0;i<l;i++)
       {if(a[i]>96&&a[i]<123)
           a[i]=a[i]-87;
        if(a[i]>64&&a[i]<91)
           a[i]=a[i]-55;
        if(a[i]>47&&a[i]<58)
           a[i]=a[i]-48;
        }
    for(i=l-1;i>=0;i--)
       {c[i]=(int)a[i]*hhh(n,l-1-i);
        }
    for(i=0;i<l;i++)
       sum=sum+c[i];
    if(sum==0)t=1;
    while(sum>0)
         {b[y]=sum%x;
          sum=sum/x;
          y++;
          }
    for(i=0;i<y;i++)
       {if(b[i]>9)
          b[i]=b[i]+55;
       else b[i]=b[i]+48;
       }
    if(t==0)
    {
    for(i=y-1;i>=0;i--)
       printf("%c",b[i]);
    }
    if(t==1)
        printf("0");

}
long int hhh(int q, int p)
{
     long int i,w=1;
     for(i=0;i<p;i++) 
        w=q*w;
     return w;          
}             
