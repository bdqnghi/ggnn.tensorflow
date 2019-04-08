int  zuob[12][3];   //???
 
int vis[12][12];
int main()
{
   // freopen("1.in","r",stdin);
   // freopen("1.out","w",stdout);
    double distance[12][12];
    memset(vis,sizeof(vis),0);
    int n;int ii,jj;
    cin >> n;
    for(int i=0;i<n;i++)
    cin >> zuob[i][0] >> zuob[i][1] >> zuob[i][2];
    for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
        distance[i][j]=sqrt((zuob[i][0]-zuob[j][0])*(zuob[i][0]-zuob[j][0])+(zuob[i][1]-zuob[j][1])*(zuob[i][1]-zuob[j][1])+(zuob[i][2]-zuob[j][2])*(zuob[i][2]-zuob[j][2]));
     
     for(int z=0;z<(n*(n-1)/2);z++)
     {double max=-1;
     for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
       if(vis[i][j]==0 && distance[i][j]>max)
        {max=distance[i][j];ii=i;jj=j;}
     cout<<"("<<zuob[ii][0]<<","<<zuob[ii][1]<<","<<zuob[ii][2]<<")"
          <<"-"<<"("<<zuob[jj][0]<<","<<zuob[jj][1]<<","<<zuob[jj][2]<<")"
          <<"=";
	 printf("%.2lf\n",max);
      vis[ii][jj]=1;
      }  
      return 0;
}   
     
         
       
    
