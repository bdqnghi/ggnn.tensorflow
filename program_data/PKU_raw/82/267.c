int main()
{
    int n,t=0,i,a,b=0,c=0;
    int x[100],y[100];
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d",&x[i-1],&y[i-1]);
        if (x[i-1]>=90&&x[i-1]<=140&&y[i-1]>=60&&y[i-1]<=90)
        {
           a=i;
          if (t==0)
          {
            t=1;
            b=a;
          }
          if ((a-b)==1)
          {
           t++;
           }
          else 
          {
            if (t>c)
            { 
            c=t; 
            } 
            t=1;
          } 
        } 
        b=a;
   } 
 if (t>c)
            { 
            c=t; 
            } 
    printf("%d",c);
    return 0;   
}
    