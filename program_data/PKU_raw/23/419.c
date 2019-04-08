int main()
{  char a[100][30]={0};                           //?????????? 
   int i=0;
   int j=0;
   char b;
   while(1)
   {  cin.get(b);
      if(b=='\n') break;                          //???????? 
      else  
        {  if(b==' ')       
              {    i=i+1;
                   j=0;
                   continue;                     //?????????? 
              }
           else                                  //???????? 
             {  a[i][j]=b;
                j=j+1;
             }
        }
      
      
   }
  for(j=i;j>0;j--)
      {  cout<<a[j]<<' ';                     //?? 
      }
   cout<<a[0];
   return 0;
}