int main()
{
  int b[300]={0};
  int c[300]={0};
  int i,n=0,j,k,m,t;
  char a[300];
  scanf("%s",a);
  for(i=0;;i++)
  {  if(a[i]==',')
   {n=n+1;
   b[i]=10000+n;}
    if(a[i]=='\0')
   {n=n+1;
    b[i]=20000;
    break;}
    if(a[i]<='9'&&a[i]>='0')
    b[i]=a[i]-'0';
   }
  for(i=0;i<5;i++)
  {if(b[i]==10001)
     {
       for(j=0;j<i;j++)
       c[0]=c[0]*10+b[j];
      break;
      }
   }    
  for(i=1;i<n;i++)
     {
       for(j=1;j<300;j++)
        {
           if(b[j]==10000+i)
             {              
              for(k=2;k<6;k++)
                {
                     if(b[j+k]==10001+i)
                       {
                           for(m=j+1;m<j+k;m++)
                         {c[i]=c[i]*10+b[m];}
                        break;   
                       }
                     if(b[j+k]==20000)
                     {
                           for(m=j+1;m<j+k;m++)
                         c[i]=c[i]*10+b[m];
                       break;
                       }
                 }
                 break;
              }
         }
      }
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
       if(c[i]<c[j])
       {t=c[j];
       c[j]=c[i];
       c[i]=t;}
     }  
     t=c[0];   
              if(c[n-1]==t)
     printf("No");   
      else{   
               for(i=1;i<n;i++)
    {
          if(c[i]<t)
          {printf("%d",c[i]);
          break;}
     }
          }
    
   return 0;
}

      
