int main()
{
    int n,i,j,jud[200] = {0};//,a[20][80]
int l[200];//????????l???????????????????????????19???????????
    char s[200][85],str[5]; 
    gets(str);
    n=atoi(str);
    for(i=0;i<n;i++)
    {
       gets(s[i]);
    }
/*
    for(i=0;i<n;i++)
    {
       l=strlen(s[i]);
       for(j=0;j<l;j++)
       a[i][j]= s[i][j];
    }
*///??????????????
    for(i=0;i<n;i++)
    {
      l[i]=strlen(s[i]);
      if(s[i][0]!='_')
      {
         if(s[i][0]<'A')
         {
         printf("0\n");
          jud[i]=1;
          continue;//??break
         }  
          if((s[i][0]<'a')&&(s[i][0]>'Z'))
         {
         printf("0\n");
          jud[i]=1;
         continue;//??break
         }         
         if(s[i][0]>'z')
         {
         printf("0\n");
          jud[i]=1;
          continue;//??break
         }
      }
      for(j=1;j<l[i];j++)
      {
        if(s[i][j]!='_')
      {
         if(s[i][j]<'0')
         {
         printf("0\n");
          jud[i]=1;
          break;
         }  
         if((s[i][j]>'9')&&(s[i][j]<'A'))
          {
         printf("0\n");
          jud[i]=1;
          break;
         }  
          if((s[i][j]<'a')&&(s[i][j]>'Z'))
         {
         printf("0\n");
          jud[i]=1;
          break;
         }         
         if(s[i][j]>'z')
         {
         printf("0\n");
          jud[i]=1;
          break;
         }
}
      if(jud[i] == 1)
      break;
      }
      if(jud[i] == 0)
      printf("1\n");
    }
return 0;
}