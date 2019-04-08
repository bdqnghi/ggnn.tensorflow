main()
{
      char a[101],b[101];
      int n,i,j=0;
          gets(a);
      n=strlen(a);
                  for(i=0;i<n-1;i++)
                                  { if(a[i]==' '&&a[i+1]==' ')
                                    continue;
                                    else 
                                      {b[j]=a[i];
                                       j++;
                                      }
                                  }
      if (a[n-1]==' ' )
      b[j]='\0';
      else 
      {b[j]=a[n-1];
       b[j+1]='\0';
      }
      puts(b);
      getchar();
}