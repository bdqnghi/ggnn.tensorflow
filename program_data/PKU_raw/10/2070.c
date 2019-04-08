int a[26];
int main()
{
    int d(int xz,int p,int q);
    int y,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    y=d(10000,1,n);
    printf("%d",y);    
}
int d(int xz,int p,int q)
{
    int g,h;
    if (p==q&&a[p]<=xz) return 1;
    else if(p==q&&a[p]>xz) return 0;
    else 
    {
         if(xz<a[p]) return(d(xz,p+1,q));
         else
         {
         g=1+d(a[p],p+1,q);
         h=d(xz,p+1,q);
         if(g>h) return(g);
         else return(h); 
         }         
    }
}
