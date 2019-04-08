int main()
{
   int i,j,k=1,a[110]={0},p=1,x=0;
   char c,h;
   h=getchar();
   a[0]=a[0]+2;
   while(c=getchar())
   {
      if(c==h)
      {
        a[p]=a[p]+2;
        p=p+1;
        }
      if(c!=h&&c!='\n')
      {
         a[p]=a[p]+1;
         p=p+1;
         }
      if(c=='\n')
      break;
      }
   for(j=0;j<p;j++)
   {
   for(i=0;i<p-1;i++)
   {   
      if(a[i]==2)
       for(k=1;k<p-i;k++)
       {
          if(a[i+k]==1)
          {
             cout<<i<<" "<<i+k<<endl;
             a[i]=0;
             a[i+k]=0;
             i=0;
             break;
             }
          if(a[i+k]==2)
          break;
          }
          }
       x=0;
      for(i=0;i<p;i++)
      {
         if(a[i]==0)
         x=x+1;
         }
      if(x==p)
      break;
      }
      return 0;
      }