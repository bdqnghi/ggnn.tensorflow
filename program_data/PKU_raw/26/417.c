main()
{
      char a[101];
      int i,k=0;
      gets(a);
      for(i=0;i<101;i++)
      {
                        if(a[i]==' '&&a[i+1]==' ')
                        a[i]='0';
      }
      for(i=0;i<101;i++)
      {
                        if(a[i]!='0'&&a[i]!=0)
                        printf("%c",a[i]);
                        else if(a[i]==0)
                        break;
      }
      getchar();
      getchar();
}
