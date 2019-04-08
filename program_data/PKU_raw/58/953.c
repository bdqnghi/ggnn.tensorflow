main()
{
      int n,i,j,x,y=0;
      char str[85];
      scanf("%d",&n);
      getchar();
      for(i=0;i<n;i++)
      {
                gets(str);
                x=strlen(str);
                if(x>1&&(str[0]=='_'||(str[0]>64&&str[0]<91)||(str[0]>96&&str[0]<123)))
                {
                 for(j=1;j<x;j++)
                 {                 
                            if(str[j]=='_'||(str[j]>64&&str[j]<91)||(str[j]>96&&str[j]<123)||(str[j]>47&&str[j]<58))
                            y=1; 
                            else
                            {
                                y=0;   
                                break;
                             }                                  
                 }
                 }
                 else if(x==1&&(str[0]=='_'||(str[0]>64&&str[0]<91)||(str[0]>96&&str[0]<123)))
                 y=1;
                 if(y==0)                                          
                             printf("0\n");
                else
                printf("1\n");
                y=0;
      }
      }
                      
