int main()
{
    int n,i,b,c;
    int a[100];
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i-1]);
    }
    b=a[0];
    for(i=0;i<n;i++)
    {
    if(b<a[i])
    b=a[i];
    }
    printf("%d\n",b);
   if(b==a[0])
     c=a[1];
     else c=a[0]; 
   for(i=0;i<n;i++)
    {
     if(c<a[i]&&a[i]<b)
      c=a[i];
    }
   printf("%d",c);   
 return 0;
}