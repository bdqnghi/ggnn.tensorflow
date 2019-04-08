int c(char a[8000])
{
    int i,l,z=0;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
                    if(a[i]=='_')
                    z=0;
                    else if(a[i]>='A'&&a[i]<='Z')
                    z=0;
                    else if(a[i]>='a'&&a[i]<='z')
                    z=0;           
                    else if(a[i]>='0'&&a[i]<='9')
                    z=0;
                    else
                    {
                        z=1;
                        break;
                    }
    }
                    return z;
}
main()
{
      char a[8000];
      int n,i;
      scanf("%d",&n);
      gets(a);
      for(i=0;i<n;i++)
      {
                      gets(a);
                      if(c(a)==1)
                      printf("0\n");
                      else if(a[0]=='_')
                      printf("1\n");
                      else if(a[0]>='A'&&a[0]<='Z')
                      printf("1\n");
                      else if(a[0]>='a'&&a[0]<='z')
                      printf("1\n");
                      else
                      printf("0\n");
      }
      getchar();
      getchar();
}
