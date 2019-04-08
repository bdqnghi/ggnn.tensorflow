main()
{
      char S[N];
      int i,j,count=0,k,l[n];
      gets(S);
      for(i=0,j=0;;i++)
      {
                      if(S[i]!=' '&&S[i]!='\0')
                      count++;
                      else
                      {
                          if(count!=0)
                          {
                                      l[j]=count;                          }
                          if(j!=0&&count!=0)
                          {
                                  printf(",");
                          }
                          if(count!=0)
                          {
                                  printf("%d",l[j]);
                                  j++;count=0;
                          }
                      }
                      if(S[i]=='\0')
                      break;
      }
      getchar();
      getchar();
      return 0;
}
