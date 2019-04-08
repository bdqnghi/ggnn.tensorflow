int c[252];
main()
{
      int x,y,i,z,m,k;
      char a[251],b[251];
      scanf("%s %s",a,b);
      x=strlen(a);
      y=strlen(b);
      if(x<y)
      {
             for(i=x-1;i>-1;i--)
             a[i+y-x]=a[i];
             for(i=0;i<y-x;i++)
             a[i]='0';
             z=y;
             k=x;
      }
       else if(x>y)
      {
             for(i=y-1;i>-1;i--)
             b[i+x-y]=b[i];
             for(i=0;i<x-y;i++)
             b[i]='0';
             z=x;
             k=y;
      }   
         else
         {
             z=x;
             k=x;
             }
      for(i=z-1;i>=0;i--)
      {
                       m=c[z-1-i]+a[i]+b[i]-'0'-'0';
                       if(m<10)
                       {
                               c[z-1-i]=m;
                       }
                       else
                       {
                           m=m%10;
                           c[z-1-i]=m;
                           c[z-i]++;
                           if(i==0)
                           z++;
                       }
      }
     
      for(i=z-1;i>=0;i--)
      {
                   if(c[i]==0)
                   z--;
                   else
                   break;
      }
       if(z==0)
       printf("0");
       else
      for(i=z-1;i>=0;i--)
      printf("%d",c[i]);
      
}
                       
                       
 

