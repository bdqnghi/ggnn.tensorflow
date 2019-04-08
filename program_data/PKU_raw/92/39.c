
int main()

{
    int n[10000],sudu[10000][2];
    int i,j,l,x;
    i=0;
    int m,z,zhongjian[2];
    int yinzi[1000];
    int wei,weik,tou,touk;
    
    do
    {
     
       scanf("%d",&n[i]);
       if(n[i]==0)
       break;
       
       else
      {
         for(j=0;j<n[i];j++)
         {
           scanf("%d",&sudu[j][0]);                 
         }
         for(j=0;j<n[i];j++)
         {
           scanf("%d",&sudu[j][1]);                 
         }
      }
      
      
          for(l=0;l<n[i];l++)
          {
              for(j=0;j<n[i]-1;j++)
              {
                    if(sudu[j][0]>sudu[j+1][0])
                      {
                          zhongjian[0]=sudu[j+1][0];              
                          sudu[j+1][0]=sudu[j][0];              
                          sudu[j][0]=zhongjian[0];
              
                       }
                    else;
              }
         }
         
         for(l=0;l<n[i];l++)
         {
             for(j=0;j<n[i]-1;j++)
             {
                   if(sudu[j][1]>sudu[j+1][1])
                     {
                         zhongjian[0]=sudu[j+1][1];              
                         sudu[j+1][1]=sudu[j][1];              
                         sudu[j][1]=zhongjian[0];
              
                      }
                   else;
             }
         }
         
         yinzi[i]=0;
         m=n[i]-1;
         wei=0;
         weik=0;
         tou=m;
         touk=m;
         x=0;
         
         
        do{
             if(sudu[tou][0]>sudu[touk][1])
             {
                yinzi[i]=yinzi[i]+200;
                x++;
                tou--;
                touk--;
             }
             else if(sudu[tou][0]<sudu[touk][1])
             {
                yinzi[i]=yinzi[i]-200;
                x++;
                wei++;  
                touk--;       
             }        
             else
              {  
                
                    while(sudu[wei][0]>sudu[weik][1])
                     {
                          wei++;
                          weik++;
                          yinzi[i]=yinzi[i]+200; 
                          x++;                                               
                     }                   
                     
                     
                 if(sudu[wei][0]==sudu[touk][1])
                 {
                     wei++; 
                     touk--; 
                     x++;                             
                 }
                 else
                 {
                     wei++; 
                     touk--;
                     yinzi[i]=yinzi[i]-200; 
                     x++;
                 }
                 }
                     
        }
        while(x<n[i]);
         
        
    i++;
    }
    while(n[i-1]!=0);
    
    z=i;
       for(i=0;i<z;i++)
    {
    printf("%d\n",yinzi[i]);
    }
         
     
    getchar();
    getchar();
}
