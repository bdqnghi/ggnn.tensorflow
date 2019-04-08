int main()
{
    int n,i,j,k,count,min;
    cin >>n;
    int input[n][n],sum[n];
    for (i=0;i<n;i++)
       {
          count=n;
          sum[i]=0; 
          for (j=0;j<n;j++)
             for (k=0;k<n;k++)
                cin >>input[j][k];
                
          while (count!=1)
          { 
          for (j=0;j<count;j++)
           {
             min=input[j][0]; 
             for (k=1;k<count;k++)
                if (input[j][k]<min)
                   min=input[j][k];                  
             for (k=0;k<count;k++)
                input[j][k]-=min;                                         
           }//??? 
           for (j=0;j<count;j++)
           {
             min=input[0][j]; 
             for (k=1;k<count;k++)
                if (input[k][j]<min)
                   min=input[k][j];                  
             for (k=0;k<count;k++)
                input[k][j]-=min;                                         
           }//??? 
           
           sum[i]+=input[1][1];
           for (k=0;k<count;k++) 
               for (j=1;j<count-1;j++)
                input[j][k]=input[j+1][k];
             for (k=0;k<count-1;k++) 
               for (j=1;j<count-1;j++)
                input[k][j]=input[k][j+1];//?? 
           count--; 
           } 
       } 
    for (i=0;i<n;i++)
      cout <<sum[i] <<endl; 
    return 0;
} 
