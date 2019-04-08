main()
{
      int i,j,k,countb,re;
      char a[256];
      char b[20];
      char c[20];
      scanf("%s",a);
      scanf("%s",b);
      scanf("%s",c);
      for(i=0;b[i]!=0;i++)
      {countb=i;}
      for(i=0;a[i]!='\0';i++)
      {
             re=0;
             if(a[i]==b[0])
             {
                    for(j=i;b[j-i]!='\0';j++)  
                    {if(a[j]!=b[j-i]) break;}
                    if(j==i+countb+1)
                    {
                       re=1;
                       for(j=i;j<=i+countb;j++)  
                       a[j]=c[j-i];                              
                    }       
             }
             else continue;   
             if(re==1)
             break;             
      }
      printf("%s",a);
      getchar();
      getchar();
}
