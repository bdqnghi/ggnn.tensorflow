main()
{
      int i,j,n;
      char *s;
      s=(char*) malloc (sizeof(char)*10000);
      gets(s);
      n=strlen(s);
      for(i=0;*(s+i)!='\0';i++)
      {
                              if(*(s+i)==' ')
                              {
                                           if(*(s+i+1)==' ')
                                           {
                                                          for(j=i;*(s+j)!='\0';j++) 
                                                          {
                                                                                    *(s+j)=*(s+j+1);
                                                          }
                                                          i--;
                                           }
                              }
      }
      puts(s);

}
