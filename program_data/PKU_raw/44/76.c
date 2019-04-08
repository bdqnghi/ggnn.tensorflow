int fan( int k );//??????????
int pow1(int n);//????10?n?????
int main()
{
    int a[6],i;
    for(i=0;i<=5;i++)//??
      cin>>a[i];
     for(i=0;i<=5;i++)//??
       cout<<fan(a[i])<<endl; 
    
    
    return 0;
    }
    int fan(int k)
    {
       int b[100],j=0,len,result=0; 
       if(k==0)
         return 0; 
       else  if(k>0)
         {
           while(k>0)     
            {
              b[j]=k%10;   //??????????
               k=k/10;
              j++;
                 }    
           len=j;
           for(j=0;j<=len-1;j++)
           {result=result+b[len-1-j]*pow1(j);}//?????10???????
               return result;
               } 
        else  if(k<0)//k??????k=-k??
         {
              k=-k;
           while(k>0)     
            {
              b[j]=k%10;   
               k=k/10;
              j++;
                 }    
           len=j;
           for(j=0;j<=len-1;j++)
           {result=result+b[len-1-j]*pow1(j);}
               return (-result);
               }        
               
               }
      int pow1(int n)//??10?n??
      {
        int result=1,i;  
          for(i=1;i<=n;i++)
          result=result*10;
          return result;
          }