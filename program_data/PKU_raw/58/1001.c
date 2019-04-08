
/*??,???????????????*/

main()
{
      char *k;int n;int num;int i; int pd; int j; 
      scanf("%d",&n);int *q;
      char *p[n]; 
      k=(char *)malloc(81*sizeof(char));gets(k);
      p[0]=k;
      for(i=1;i<n+1;i++)
      {
                    k=(char *)malloc(81*sizeof(char));
                    gets(k);
                    p[i]=(char *)malloc(81*sizeof(char));
                    p[i]=k; 
      }
      
      for(i=1;i<n+1;i++) 
      {
                    num=strlen(p[i]);
                    if(*p[i]=='_'||isalpha(*p[i]))                  
                    pd=1;
                    else
                    pd=0;
                    
                    p[i]++; 
                   
                    for(j=1;j<num;j++)
                    { 

                           if(isalnum(*p[i]))
                           {
                           p[i]++; 
                           }
                           else if(*p[i]=='_') 
                           p[i]++; 
                           else
                           {
                               pd=0;break;
                           }
                           
                     } 
      printf("%d\n",pd);              
      }
       
              
      } 
       

