int main()
{
    int i,n,x,a,b,t,m,c;
    int s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
    if(s[0]<s[1])
    {
       a=s[1];
       b=s[0];
     }
     else
     {
       a=s[0];
       b=s[1];
      }
     for(i=2;i<n;i++)
     {
        if(s[i]<b) continue;
        if(s[i]>b&&s[i]<a)
        {
           t=s[i];
           s[i]=b;
           b=t;
         }
         else
         {
            m=s[i];
            s[i]=a;
            a=m;
            c=s[i];
            s[i]=b;
            b=c;
          }
       }
       printf("%d\n%d\n",a,b);
       return 0;
}
