
int main()
{
  int n,i,j;
  cin>>n;

  double a[n],b[n];
  double distance[n][n];
  for(i=1;i<=n;i++)
{
   cin>>a[i];                
   cin>>b[i];          }
                   
                for(j=1;j<=n;j++)   
                  {
                     for(i=1;i<=n;i++)
                   {
                     distance[j][i]=sqrt((double)(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));               
                                    }
                                    }
                                    double longest=0.0;
                                    for(j=1;j<=n;j++)
                                    {  
                                       for(i=1;i<=n;i++)
                                      {
                                           if(distance[j][i]>longest) 
                                           longest=distance[j][i];               
                                                     }
                                                                              }
          printf("%.4f\n", longest);
     
return 0;
}