
int main()
{
   int i,j,k,n,c,d,m;
   int a[100][2],b[300][2];
   i=0;
   j=0;
   k=0;
   n=0;
   d=0;
   c=0;
   m=1;
   do {
       scanf("%d%d",&a[i][0],&a[i][1]);   
       i++;
       }   
   while (a[i-1][0]!=0&&a[i-1][1]!=0);
   
    for(j=0;j<i-1;j++)
    {
       for(k=0;k<a[j][0];k++)
       {
        b[k][0]=k+1;
        b[k][1]=1;
        }
        while(m<=a[j][1])
        {  
           if(b[n][1]!=0)
           {  
           if(m!=a[j][1])
           b[n][1]=1;
           else
           {
             b[n][1]=0;
             m=0;
             c++;
             }
             m++;
           }
           else;
           
           if(n<a[j][0]-1)
             n++;
             else
             n=0;
           
             if(c==a[j][0]-1)
             {
             for(d=0;d<a[j][0];d++)
             {
                if(b[d][1]==1)
                printf("%d\n",b[d][0]);
                else;
             }
             break;
             }
             else;    
        }
        m=1;  
        n=0;
        c=0;
        
            
    }   
    
    
    
    getchar();
    getchar();
    
}