int main()
{
    char zfc[105];
    char sign[105];
    char present[105];
    while(scanf("%s",zfc)>0)
    {
        //scanf("%s",zfc);
        strcpy(sign,zfc);
        strcpy(present,zfc);
        int left=0,right=0;
        int m=strlen(zfc);
        for(int i=0;i<m;i++)
        {
            if(zfc[i]=='(')
            {
               left=0;
               right=0;
               for(int j=i;j<m;j++)
               {
                   if(zfc[j]=='(')
                   {
                      left++;            
                   }
                   if(zfc[j]==')')
                   {
                      left--;            
                   }
                   if(left<=0)
                   {
                      break;        
                   }    
               }
               if(left>0)
               {
                  sign[i]='$';           
               }            
            }
            if(zfc[i]==')')
            {
               left=0;
               right=0;
               for(int j=i;j>=0;j--)
               {
                   if(zfc[j]=='(')
                   {
                      right--;            
                   }
                   if(zfc[j]==')')
                   {
                      right++;            
                   }
                   if(right<=0)
                   {
                      break;         
                   }    
               }
               if(right>0)
               {
                  sign[i]='?';           
               }            
            }        
        }
        for(int i=0;i<m;i++)
        {
            if(sign[i]!='$'&&sign[i]!='?')
            {
               sign[i]=' ';                           
            }    
        }
        puts(present);
        puts(sign);    
    }
    return 0;
}