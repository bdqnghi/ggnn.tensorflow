main()
{
      char a[1000],b[1000],c[1000];
      int l,i,j,k,temp;
      scanf("%s %s %s",a,b,c);
      l=strlen(b);
      for(i=0;a[i]!='\0';i++)
      {
                             if(a[i]==b[0])
                             {
                                           temp=0;
                                           for(j=0;j<l;j++)
                                           {
                                                           if(b[j]!=a[j+i]) break;
                                           }
                                           if(j==l)
                                           {
                                                   for(j=0;j<l;j++)
                                                   {
                                                                   a[j+i]=c[j];
                                                   }
                                                   break;
                                           }
                             }
      }
      printf("%s",a);
      
}
