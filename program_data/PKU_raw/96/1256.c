main()
{
      char str[105];
      int a[105],p[105];
      int i,len,t=0;
      scanf("%s",str);
      len=strlen(str);
      for(i=0;i<len;i++)
      {
       a[i]=str[i]-'0';                  
      }
      if(len==2&&10*a[0]+a[1]<13)
      printf("0\n%d\n",10*a[0]+a[1]);
      else
      {
          if(len==1)
                     printf("0\n%d\n",a[0]);
          else
          {
                    t=a[0]*10+a[1];
                    p[0]=t/13;
                    t=t%13;
                     if(p[0]!=0)
                                printf("%d",p[0]);
                     for(i=2;i<len;i++)
                     {
                         t=t*10+a[i]; 
                         p[i-1]=t/13;
                         printf("%d",p[i-1]);
                         t=t%13;                 
                     }   
                printf("\n%d\n",t);
          }
      }  
}
