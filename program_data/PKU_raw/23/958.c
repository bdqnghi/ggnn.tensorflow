main()
{
      char a[1000];
      int b[1000],num=0,i,j,k,check=0;
      b[0]=0;
      gets(a);
      for(i=0;a[i]!='\0';i++)
      {
      if(a[i]==' ')
      check++;
      }
      if(check==0)
      puts(a);
      else{
      for(j=1;j<=check;j++)
      {
      for(i=b[j-1]+1;a[i]!='\0';)
      {
      if(a[i]==' ')
      {b[j]=i;
      break;}
      else i++;
      }
    
      }
      
     b[check+1]=1000;
      for(j=check;j>0;j--)
      {
      for(i=b[j]+1;i<b[j+1]&&a[i]!='\0';i++)
      printf("%c",a[i]);
      printf(" ");
      }
      for(i=0;a[i]!=' ';i++)
      printf("%c",a[i]);
      }
      getchar();
      getchar();
}