int main()
{
    int n,m,i,j,t=0,b=0;
    char s[80],s0[80];
    char s1[80]={"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    scanf("%d %s %d",&n,s,&m);
    for(i=0;s[i]!='\0';i++)
    {
           if(s[i]>='a'&&s[i]<='z')
           {
               s[i]=s[i]-32;
           }
         for(j=0;j<36;j++)
        {
             if(s1[j]==s[i])
         {
           t=n*t+j;
          }
         }
    }
   for(i=0;;i++)
   {
        s0[i]=s1[t%m];
        b++;
        t=t/m;
        if(t==0)
        {
            break;
        }
   }
   for(i=b-1;i>=0;i--)
   {
       printf("%c",s0[i]);
   }
    printf("\0");
    return 0;
}
     
    