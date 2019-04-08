
int main()
{
    int i=0,t,l,m,n,k,s=0;
    int a[10000];
    scanf("%d",&n);
    for(t=2;t<=n;t++)
    {
                     k=(int)sqrt(t);
                     for(m=2;m<=k;m++)
                     {
                       if(t%m==0)
                       break;
                       }
                       if(m==k+1)
                       {
                       a[i]=t;
                       i=i+1;
                       }
                       }
    l=i;
    for(i=0;i<l;i++)
    {
                         if(a[i+1]-a[i]==2){
                         printf("%d %d\n",a[i],a[i+1]);
                         s=s+1;}
                         }
                         if (s==0)
                         printf("empty\n");
                 
                     }