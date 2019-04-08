int main()
{
   char a[251],b[251];
   int d[251]={0},e[251]={0},c[251]={0};
   int m,n,i,j,t;
   gets(a);
   gets(b);
   m=strlen(a); 
   n=strlen(b);
   for(i=0;i<m;i++)
   d[m-1-i]=a[i]-'0';
   for(i=0;i<n;i++)
   e[n-1-i]=b[i]-'0';
   if(m>n) t=m;
   else t=n;
   for(i=0;i<t;i++)
   {
       c[i]+=(d[i]+e[i]);
       if(c[i]>9)
       {
         c[i+1]=c[i+1]+1;
         c[i]=c[i]%10;
        }
    }
    if(c[t]>0)
    t++;
    while(c[t-1]==0)
    t--;
    if(t==-1)
    printf("0");
    else 
    for(i=t-1;i>=0;i--)
    printf("%d",c[i]);
    printf("\n");
    return 0;
}    
