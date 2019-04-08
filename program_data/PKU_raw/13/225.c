int main()
{
    int b,c,n,i;
    scanf ("%d",&n);
    int a[n];
    for (i=1;i<=n;i++)
     {
       scanf ("%d",&a[i]);
     }
    for (i=1,b=1;i<=n;i++,b++)
     { 
       if (b==1)
       printf("%d",a[i]);
       else
        {
        for (c=1;c<=i;c++)
         {
            if(a[c]==a[i])
             break;
         }
         if (c==i)
         printf (" %d",a[i]);
        }
     }
    getchar();     
    getchar();
}
