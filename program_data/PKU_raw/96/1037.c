main()
{
      int i,m,count;
      int a[SIZE],b[SIZE];
      char string[101];
      scanf("%s",string);
      for(i=0;i<=99;i++)
      a[i]=0;
      count=0;
      for(i=0;i<=99;i++)
      {
                        if(string[i]=='\0')
                        break;
                        a[i]=string[i]-48;
                        count++;
      }
      if(count>2)
      {
                  for(i=0;i<=count-2;i++)
                  b[i]=0;
                  for(i=0;i<=count-2;i++)
                  {
                                         b[i]=(a[i]*10+a[i+1])/13;
                                         a[i+1]=(a[i]*10+a[i+1])%13;
                  }
                  m=a[count-1];
                  if(b[0]==0)
                  {
                             for(i=1;i<=count-2;i++)
                             printf("%d",b[i]);
                             printf("\n");
                             printf("%d",m);
                  }
                  if(b[0]!=0)
                  {
                             for(i=0;i<=count-2;i++)
                             printf("%d",b[i]);
                             printf("\n");
                             printf("%d",m);
                  }
      }      
      if(count==1)
      {
                  printf("%d",0);
                  printf("\n");
                  printf("%d",a[0]); 
      }     
      if(count==2)
      {
                  if((a[0]*10+a[1])<13)
                  {
                                        printf("%d",0);
                                        printf("\n");
                                        printf("%d",a[0]*10+a[1]);
                  }
                  if((a[0]*10+a[1])>=13)
                  {
                                       printf("%d",(a[0]*10+a[1])/13);
                                       printf("\n");
                                       printf("%d",(a[0]*10+a[1])%13);
                  }
      }
    
}
      
      
      
      
      
