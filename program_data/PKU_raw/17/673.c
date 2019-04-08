/*
  Name: ??????
  Copyright: 
  Author: 
  Date: 20/11/12 21:21
  Description: ????????????100?????????????????
  ????????????????????????????????????
  ????????????????????????????????????
  ????????????????????????????????????
  ??"$"??,?????????"?"?? 
*/
int main()
{
   char str[100][100]={'\0'};
   int m=0;
   int i,j,t;//???? 
   int a=0,b=0;//??????? 
   int c[100]={0};      
      
   while(cin>>str[m])
   {
      
           for(j=0;j<strlen(str[m]);j++)
           {
              if(str[m][j]=='(')
              {
                 if(j==strlen(str[m])-1) 
                    c[j]=1; 
                 else
                 { 
                     for(t=j;;t++)
                     {
                        if(str[m][t]=='(')
                           a++;
                        else if(str[m][t]==')') 
                           b++;
                        if(t==strlen(str[m])-1||(a==b&&a!=0))
                            break; 
                     }
           
                        if(a>b)// “(”?“?”??????“?”???? 
                           c[j]=1;
                        a=b=0; 
                 }                   
              }
              else if(str[m][j]==')')
              {
                 if(j==0)
                    c[j]=2;
                 else
                 { 
                     for(t=j;;t--)
                     {
                        if(str[m][t]=='(')
                           a++;
                        else if(str[m][t]==')') 
                           b++;
                        if(t==0||(a==b&&a!=0)) 
                           break;                        
                     }
                    
                     if(a<b)//“?”?“?”???“?”?? 
                           c[j]=2;
                     a=b=0; 
                 }                        
              }
              else
                 continue;
           }
          
           cout<<str[m]<<endl;//????????
           
           for(j=0;j<=strlen(str[m])-1;j++)
           {
              if(c[j]==0)
                 cout<<' ';// 
              else if(c[j]==1)
                 cout<<'$';// “?”??? 
              else if(c[j]==2)
                 cout<<'?';// “?”??? 
            }  
            cout<<endl;
              
               a=0;
               b=0; 
               for(j=0;j<100;j++)//?? 
                  c[j]=0;            
      
           m++; 
                     
   }
   return 0;  
}

