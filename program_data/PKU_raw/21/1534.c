void main()
{   int n,i,j,t;float p=0,m,w,q;int a[300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {   p=p+a[i];}
    m=(p/n);
    for(j=0;j<n-1;j++)
    {   for(i=0;i<n-1-j;i++)
       {   if(a[i]>a[i+1])
          {
              t=a[i];
              a[i]=a[i+1];
              a[i+1]=t;
           }
        }
    } 
    w=m-a[0];q=a[n-1]-m;
    if(w==q)printf("%d,%d",a[0],a[n-1]);
    else if(w<q)printf("%d",a[n-1]);
         else printf("%d",a[0]);
}
