main()
{
      int i,j,k,g,ans,max,temp,n,l,t;
      char c[1000];     
      while(scanf("%s",c)!=EOF)
      {
             printf("%s\n",c);
                      for(k=0;k<100;k++)
                      {
                                         for(i=0;c[i]!='\0';i++)
                                         {
                                                                if(c[i]=='(')
                                                                {
                                                                             for(j=i+1;c[j]!='\0';j++)
                                                                             {
                                                                                                    if(c[j]=='(')
                                                                                                    {
                                                                                                                 i=j-1;
                                                                                                                 break;
                                                                                                    }
                                                                                                    if(c[j]==')')
                                                                                                    {
                                                                                                                 c[i]=' ';
                                                                                                                 c[j]=' ';
                                                                                                                 break;
                                                                                                    }
                                                                             }
                                                                }
                                         }
                      }
                      for(i=0;c[i]!='\0';i++)
                      {
                                             if(c[i]=='(') c[i]='$';
                                             else if(c[i]==')') c[i]='?';
                                             else c[i]=' ';
                      }
                      printf("%s\n",c);
      }
      
}
