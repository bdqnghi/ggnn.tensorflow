main()
{
 char num[6][1000];
 for(int i=0;i<6;i++)
 scanf("%s",num[i]);
 for(int i=0;i<6;i++)
 {
  int n;
  n=strlen(num[i]);
     if(num[i][0]=='0'||(num[i][0]=='-'&&num[i][1]=='0'))
     {printf("0");}
    else
     {
                   if(num[i][0]=='-')
                   {printf("-");   
                    while(num[i][n-1]=='0')
                    {n=n-1;}
                     for(int j=n-1;j>=1;j--)
                        {
                          printf("%c",num[i][j]);
                                                      }
                            }
      else
    {              while(num[i][n-1]=='0')
                    {n=n-1;}
      for(int j=n-1;j>=0;j--)
     {
      
      printf("%c",num[i][j]);         
                        } } }
      printf("\n");                     
                 }     
    getchar();getchar();getchar();  getchar();getchar();getchar();    getchar();getchar();getchar();    
      }