main()
{
      char a[800];
      int len,num=0;
      gets(a);
      len=strlen(a);
      for(int i=1;i<len;i++)
      {
              for(int j=0;j<len-i;j++)
              {
                     for(int k=j;k<=(j+i/2);k++)
                     {
                             if(a[k]==a[j+j-k+i])
                                num++;
                             else
                             {
                                 num=0;
                                 break;
                             }
                     }
                     if(num==i/2+1)
                     {
                                   for(int k=j;k<=i+j;k++)
                                    printf("%c",a[k]);
                                   printf("\n");
                     }
                     num=0;
              }
      }
}