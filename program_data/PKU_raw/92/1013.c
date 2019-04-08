int quicksort(int *a,int initial,int end)
{
    int m,i,tmp;
    if (initial>=end) return;
    m=initial;
    for (i=initial+1;i<=end;i++)
      if (a[i]<a[initial])
      {
         tmp=a[i];
         a[i]=a[++m];
         a[m]=tmp;
      }
    tmp=a[m];
    a[m]=a[initial];
    a[initial]=tmp;
    if (initial<m-1) quicksort(a,initial,m-1);
    if (m+1<end) quicksort(a,m+1,end);
}
int run(int a[],int b[],int n)
{
    int *tag1;
    int *tag2;
    int i,time=0,posa1=0,posb1=0,posa2=n-1,posb2=n-1,nul=0;
    tag1=(int *)malloc(sizeof(int)*n);
    tag2=(int *)malloc(sizeof(int)*n);
    quicksort(a,0,n-1);
    quicksort(b,0,n-1);
    while (posa1<=posa2)
    {
        if (a[posa1]>b[posb1])
        {
            time++;
            posa1++;
            posb1++;
        }
        else
          if (a[posa2]>b[posb2])
          {
              time++;
              posa2--;
              posb2--;
          }
          else
            if (a[posa1]<b[posb2])
            {
                time--;
                posa1++;
                posb2--;
            }
            else
              if (a[posa1]==b[posb2])
              {
                  nul++;
                  posa1++;
                  posb2--;
              }
    }
     //printf("win%d nul%d loss%d",time,nul,n-time-nul);
    return (time)*200;//-(n-time-nul)*200;
}

int main()
{
   int n=1,i;
   int *t;
   int *q;
   //scanf("%d",&n);
   while(n!=0)
   {
      scanf("%d",&n);
      t=(int *)malloc(sizeof(int)*n);
      q=(int *)malloc(sizeof(int)*n);
      for (i=0;i<n;i++)
        scanf("%d",t+i);
      for (i=0;i<n;i++)
        scanf("%d",q+i);
      if (n!=0)
      printf("%d\n",run(t,q,n));
   }
}
