main()
{
     char s[100]={0};
     int a[100]={0};
     int i,k=0;
     int b[100]={0};
      scanf("%s",s);
     int len=strlen(s);
     for(i=0;i<len;i++)
     {
                       a[i]=s[i]-'0';
                       b[i]=(k*10+a[i])/13;
                        k=(k*10+a[i])%13;
     }
     if(len==1)  printf("0\n");
     else
     {
     if(b[1]==0)
                for(i=2;i<len-1;i++)
                         printf("%d",b[i]);
     else
         for(i=1;i<len-1;i++)
                  printf("%d",b[i]);
     printf("%d\n",b[len-1]);
     }
     printf("%d\n",k);
    
}
    
