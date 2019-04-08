int main()
{
    int n;
    int i,j;
    cin>>n;
    double far=0,dis=0;
    double point[n][2];
    for(i=0;i<n;i++)
    {
                    cin>>point[i][1];
                    cin>>point[i][2];
                    }
    for(i=0;i<n;i++)
    {
            for(j=i+1;j<n;j++)
            {
                              dis=sqrt((point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[
                              i][2]-point[j][2]));
                              if(dis>=far)far=dis;
                              }
                              }
                              printf("%.4f\n",far);
                              
                              return 0;
                              }
                                 
    
