main()
{
      int i,j,temp,yushu=0;
      char a[105],b[105];
      scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      {
                             temp=a[i]-'0'+yushu*10;
                             b[i]=temp/13;
                             yushu=temp%13;
      }
      if(b[0]==0)
      {
                 if(b[1]==0)
                 {
                            if(i==1||i==2) printf("0");
                            for(j=2;j<i;j++) printf("%c",b[j]+'0');
                 }
                 else
                 {
                     for(j=1;j<i;j++) printf("%c",b[j]+'0');
                 }
      }
      else
      {
          for(j=0;j<i;j++) printf("%c",b[j]+'0');
      }
      printf("\n%d",yushu);
      
}
