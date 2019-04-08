main()
{
      int n,i,j;
      float dis;
      scanf("%d",&n);
      float d[n][2];
      for(i=0;i<n;i++)
      {
                      scanf("%f %f",&d[i][0],&d[i][1]);
      }
      dis=0;
      for(i=0;i<n;i++)
      {
                      for(j=i+1;j<n;j++)
                      {
                                     
                               if((d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1])>dis)
                               dis=(d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1]);
                               
                      }
      }
      dis=sqrt(dis);
      printf("%.4f\n",dis);
      
}
                      