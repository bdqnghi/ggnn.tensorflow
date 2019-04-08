main()
{
      char a[100];
      int len,i,num[100]={0},t,r;
      scanf("%s",&a);
      len=strlen(a);
      for(i=0;i<len;i++)
               num[i]=a[i]-'0';
      if(num[0]*10+num[1]<13&&len==2)
          printf("%d\n%d",0,num[0]*10+num[1]);
          else if(len==1)
                printf("%d\n%d",0,num[0]);
                else
                
     {      if(num[0]*10+num[1]<13)
               r=num[0]*10+num[1];
           else
              {
                r=(num[0]*10+num[1])%13   ;  
                printf("%d",(num[0]*10+num[1])/13);
              }
      for(i=2;i<len;i++)
         {
            t=(r*10+num[i])/13;
            r=(r*10+num[i])%13;
            printf("%d",t);
         }
      printf("\n");
      printf("%d",r);
      }
}