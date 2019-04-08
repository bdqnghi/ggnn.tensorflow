main()
{
      int t,i,j,k,x;
      char a[100000],firstone;
      int c;
      scanf ("%d",&t);
      for (i=0;i<t;i++)
      {
          c=0;
          scanf("%s",&a);
          for (j=0;a[j]!='\0';j++)
          {
              x=0;
              for (k=0;a[k]!='\0';k++)
              {
                  if (a[j]==a[k]) x=x+1;
              }
              if (x==1) 
              {
                  firstone=a[j];
                  break;
              }
          }
          if (x!=1) c=c+1;
          if (c==0) printf ("%c\n",firstone);
          else printf ("no\n");
      }
}
