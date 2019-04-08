int main()
{
    int n,i,a,b,c;
    i=1;
    scanf("%d",&n);
    b=0;
    c=0; 
    while(i<=n)
    {
               scanf("%d",&a);
               if(a>b)
               {
                      if(c<b)
                      {
                             c=b; 
                      } 
                      b=a; 
               } 
               else
               {
                   if(c<a)
                   {
                          c=a; 
                   } 
               } 
               i++; 
                
    }
    printf("%d\n",b);
    printf("%d\n",c); 
    return 0; 

} 