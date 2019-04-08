

void bubble(int x[],int n)          //???? ?n?????
{
    int i,j,y;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(x[j]>x[j+1])
            {
                y=x[j];
                x[j]=x[j+1];
                x[j+1]=y;                  
            }                  
        }                
    }     
} 

int main()
{
   int x[5][5],a[5],b[5];
   int i,j,t1,t2,sign=0;
   
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           scanf("%d",&x[i][j]);                
       }                
   }  
   
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           a[j]=x[i][j];                
       }
       bubble(a,5);
       for(j=0;j<5;j++)
       {
           if(a[4]==x[i][j])
               t1=j;                
       }
       
       for(j=0;j<5;j++)
       {
           b[j]=x[j][t1];               
       }
       bubble(b,5);
       for(j=0;j<5;j++)
        {
           if(b[0]==x[j][t1])
               t2=j;                
       }
       if(a[4]==b[0])
          {
                     printf("%d %d %d",t2+1,t1+1,a[4]);
                      sign=1;
                      }                        
   } 
   
   if(sign==0)
   printf("not found");
   
    
   scanf("%d",&x[i][j]);  
   return 0;
   
}
