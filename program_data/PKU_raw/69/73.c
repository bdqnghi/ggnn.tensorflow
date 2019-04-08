main()
{
      char a[250]={'0'},b[250]={'0'};
      scanf("%s",a);
      scanf("%s",b);
      int la,lb,l,c[251]={0},x=0,sum;
      la=strlen(a);
      lb=strlen(b);
      l=la;
      if(la>lb)
      {        
               for(int i=0;i<=lb;i++)
               {
               b[la-i]=b[lb-i];
               }
               for(int i=0;i<la-lb;i++)
               b[i]='0';
               
      }
      if(la<lb)
      {        
               for(int i=0;i<=la;i++)
               {
               a[lb-i]=a[la-i];
               }
               for(int i=0;i<lb-la;i++)
               a[i]='0';
               l=lb;
      }
      for(int i=l;i>0;i--)
      {
              sum=a[i-1]+b[i-1]-'0'-'0'+x;
              c[i]=sum%10;
              x=sum/10; 
      }
      c[0]=x;
      for(int i=0;i<l;i++)
      {
              if(c[i]!=0)
              {
                         
                         for (int j=i;j<l;j++)
                         printf("%d",c[j]);
                         break;
              }
      }
      printf("%d",c[l]);
      }
