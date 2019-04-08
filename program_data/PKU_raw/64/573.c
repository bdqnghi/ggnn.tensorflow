typedef struct _DISTANCE{
    float distance;
    int pointa[3];
    int pointb[3];
} DISTANCE;
int main() {
    int n,i,j,k=0,b,m,point[10][3];
    cin>>n;
    for(i=0;i<n;i++){
          for(j=0;j<3;j++){
                 cin>>point[i][j];
          }                                      
    }
                                      
    DISTANCE test[n*(n-1)/2];

    for ( i = 0; i <n; ++i)
    {
        for(j=i+1;j<n;j++)
        {
          float distance=sqrt((point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2]));
             test[k].distance=distance;
             for(m=0;m<3;m++)
             test[k].pointa[m]=point[i][m];
             for(m=0;m<3;m++)
             test[k].pointb[m]=point[j][m];
             k++;
          }
    }
 
        for ( i = 0; i <n*(n-1)/2-1 ; i++)
          {
              for(j = 0; j <n*(n-1)/2-i-1 ; j++) 
              { 
                    if(test[j].distance<test[j+1].distance)
                    {
                         DISTANCE temp=test[j+1];
                          test[j+1]=test[j] ;
                          test[j]=temp;
                    }
              }
          }                                
                                                       
       
      for(k=0;k<n*(n-1)/2;k++) 
     {
         cout<<"("<<test[k].pointa[0]<<","<<test[k].pointa[1]<<"," <<test[k].pointa[2]<<")"<<"-"<<"("<<test[k].pointb[0]<<","<<test[k].pointb[1]<<"," <<test[k].pointb[2]<<")"<<"=";  
         printf("%.2f\n",test[k].distance); 
      }
    
    }