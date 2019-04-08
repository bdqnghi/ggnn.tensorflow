char chStr[103][101];
int iLen=0;
int main()
{    int i,j=0,k;
    while(cin>>chStr[j]) j++;
        while(chStr[j-1][iLen]) iLen++;
            for(i=0;i<j-2;++i) 
               {    
                            if(!strcmp(chStr[i],chStr[j-2])) 
                                       {                 
                                                            for(k=0;k<101;++k) chStr[i][k]=0;  
                                                     
                                                     
                             for(k=0;k<iLen;++k) chStr[i][k]=chStr[j-1][k];  
                                       } 
                                          } 
                                             for(i=0;i<j-3;++i) 
                                                {          
                                                             cout<<chStr[i]<<" ";
                                                                 }  
                                                                   cout<<chStr[j-3]<<endl; 
                                                                      return 0;}                                                               
