int bj(const void * x, const void * y)
{
    if(*(int *)x>*(int *)y) return 1;
    if(*(int *)x<*(int *)y) return -1;
    if(*(int *)x==*(int *)y) return 0;
}
int main()
{
    int n,k,i,j,a[1000],pds=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,4,bj);
    for(i=0;i<n-1;i++)
    {
         for(j=n-1;j>i;j--)
         {
              if(a[i]+a[j]<k) break;
              else if(a[i]+a[j]==k) {pds=1;break;}
         }
         if(pds==1) break;             
    }
    if(pds==1) printf("yes");
    else printf("no");
    
}
