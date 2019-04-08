main()
{
          int i,j,t,m;
          char str[1000];
          scanf("%s",str);
          i=strlen(str);
          if (str[0]>='a'&&str[0]<='z')
          str[0]=str[0]+'A'-'a';  
          t=str[0];
          m=0;
          for(j=0;j<i;j++)
          {
              if (str[j]>='a'&&str[j]<='z')
              str[j]=str[j]+'A'-'a';     
              if (t==str[j])
              m=m+1;
              else 
              {
              printf("(%c,%d)",t,m);
              t=str[j];
              m=1;
              }
          }
          printf("(%c,%d)",t,m);
}
