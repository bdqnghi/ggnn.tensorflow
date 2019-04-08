int a,b,len=0;
char str[101];
int num[101],res[101];
int pow(int x,int y);
int main()
{   
     int i,j=0; 
        int con=0;  
          cin>>a>>str>>b; 
             while(str[len]) 
             len++;   
              for(i=0;i<len;++i)   
               {            
                            if(islower(str[i]))         
                               {                
                                                    num[i]=(int)str[i]-87;        
                                                        }         
                                                           if(isupper(str[i]))  
                                                                    {          
                                                                                         num[i]=(int)str[i]-55;   
                                                                                                  }       
       if(isdigit(str[i]))         
          {                 
                               num[i]=(int)str[i]-48;   
                                        }  
                                          }   
                                           for(i=0;i<len;++i)  
                                             {         
                                                          con+=num[i]*pow(a,(len-i-1)); 
                                                             }    while(con>0)    
                                                             {           
                                                                         res[j]=con%b;    
                                                                                 con-=con%b;   
                                                                                          con/=b;      
                                                                                                j++;   
                                                                                                 }   
                                                                                                  memset(str,0,sizeof(str)); 
                                                                                                     for(i=0;i<j;++i)    {         
                                                                                                                            if(res[i]<10) str[j-i-1]=(char)res[i]+48;   
                                                                                                                                     if(res[i]>=10) str[j-i-1]=(char)res[i]+55; 
                                                                                                                                        }   
                                                                                                                                         if(str[0]==0) str[0]='0'; 
                                                                                                                                            cout<<str<<endl;  
                                                                                                                                              return 0;}
                                                                                                                                              int pow(int x,int y)
                                                                                                                                              {    int i;  
                                                                                                                                                int res=1;  
                                                                                                                                                  for(i=0;i<y;++i) res*=x;  
                                                                                                                                           return res;
                                                                                                                                           }

