main()
{
      char a[30];
      int c,i,j;
      gets(a);
      c=strlen(a);
      for(i=0;i<c;i++)
      {
            if((a[i]-'0'>=0)&&(a[i]-'9'<=0))
            {
                printf("%c",a[i]);
            }
            else
            {
                if(i>=1)
                {
                        if((a[i-1]-'0'>=0)&&(a[i-1]-'9'<=0))
                        printf("\n");
                }
            }              
      }
      getchar();
      
}
