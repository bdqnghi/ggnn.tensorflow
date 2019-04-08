main()
{
    char s[max],a[max],b[max];
    int ls,la,i,j;
    scanf("%s",s);
    scanf("%s",a);
    scanf("%s",b);
    for (i=0;s[i]!='\0';i++);
    ls=i;
    for (i=0;a[i]!='\0';i++);
    la=i;

    for (i=0;i<=ls-la+1;i++)
     {
         for (j=i;j<=i+la-1;j++)
           if (s[j]!=a[j-i]) break;
         if (j==i+la)
          {
              for (j=i;j<=i+la-1;j++)
                s[j]=0;//0????
              i=j-1;
              break;//???????
          }
     }

    for (i=0;i<=ls-1;i++)
      if (s[i]==0)
      {
          printf("%s",b);
          i+=la-1;
      }
      else
      printf("%c",s[i]);
}
