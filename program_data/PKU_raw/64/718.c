int main()
{
    int spot[11][3],i,j,n,count=0,x,y,z;
    float dis[4951][3],k;
    cin >>n;
    for (i=1;i<=n;i++)
       for (j=0;j<3;j++)
          cin >>spot[i][j];//???? 
    for (i=1;i<n;i++)
       for (j=i+1;j<=n;j++)
          {
             count++;
             x=spot[i][0]-spot[j][0];
             y=spot[i][1]-spot[j][1];
             z=spot[i][2]-spot[j][2];
             dis[count][0]=sqrt(x*x+y*y+z*z);
             dis[count][1]=i;
             dis[count][2]=j;
          }//???????? 
    for (i=1;i<count;i++)
        for (j=1;j<=count-i;j++)
              if (dis[j][0]<dis[j+1][0])
                  {
                      k=dis[j][0];
                      dis[j][0]=dis[j+1][0];
                      dis[j+1][0]=k;
                      k=dis[j][1];
                      dis[j][1]=dis[j+1][1];
                      dis[j+1][1]=k;
                      k=dis[j][2];
                      dis[j][2]=dis[j+1][2];
                      dis[j+1][2]=k;                 
                  }//?? 
    for (i=1;i<=count;i++)
        {
           cout <<"(" <<spot[(int)dis[i][1]][0] <<"," <<spot[(int)dis[i][1]][1] <<"," <<spot[(int)dis[i][1]][2] <<")";
           cout <<"-";
           cout <<"(" <<spot[(int)dis[i][2]][0] <<"," <<spot[(int)dis[i][2]][1] <<"," <<spot[(int)dis[i][2]][2] <<")";
           cout <<"=";
           printf("%.2f",dis[i][0]);
           cout <<endl;          
        }     
    return 0;
}
