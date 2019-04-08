int main()
{
    int a[100000];
    int n,k,i,j=0,l;
    int *p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    p=a;
    for(i=0;i<n;i++)
       {
                    if(a[i]!=k)
       {
                  if(j!=0) printf(" %d",a[i]);
                  if(j==0) {printf("%d",a[i]);j++;}   
       }
       
       }
} 