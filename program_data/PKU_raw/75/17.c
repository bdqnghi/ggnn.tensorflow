int main()
{
    int a[2][1000],b[2][1000],i=0,n,j,m;
    char c='\0';
  for(i=0;c!='\n';i++)
    { 
    scanf("%d%c",&a[0][i],&c);
    }
   
    i=0;c='\0';
  for(i=0;c!='\n';i++)
    {
    scanf("%d%c",&a[1][i],&c);
    }
    n=i;
    //for(i=0;i<n;i++)printf("%d %d\n",a[0][i],a[1][i]);
    int p[1001]={0};
    float t;
    for(t=0.5,i=0;t<=998.5;t++,i++)
    {
    //printf("%f",t);
    for(j=0;j<n;j++)
    {
    if(a[0][j]<t&&a[1][j]>t)
     p[i]=p[i]+1;
    }                       
    //printf("%d ",p[i]);
    }
    m=p[0];
   //for(i=0;i<1000;i++)printf("%d ",p[i]);
    for(i=0;i<1000;i++)
    if(p[i]>m)m=p[i];
   printf("%d %d",n,m);
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}
    