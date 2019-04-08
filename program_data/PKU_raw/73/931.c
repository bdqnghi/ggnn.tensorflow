int main()
{
    int num[5][5],i,j,k[5],h[5],a[5],b[5],m,p,q,x,y;
    for(i=0;i<=4;i++)
      {
                     k[i]=0;
                     for(j=0;j<=4;j++)
                     {
                                      scanf("%d",&num[i][j]);
                                      if (num[i][j]>k[i]) 
                                      {
                                                          k[i]=num[i][j];
                                                          a[i]=j;
                                      }
                     }
                     
      }
      
      
      
      
      for(q=0;q<=4;q++)
      {
                     h[q]=100000;
                     for(p=0;p<=4;p++)
                     {
                                      if (num[p][q]<h[q]) 
                                      {
                                                          h[q]=num[p][q];
                                                          b[p]=p;
                                      }
                     }
                     
      }
      m=0;
      for(x=0;x<=4;x++)
      {
                     for(y=0;y<=4;y++)
                     {
                                      if (k[x]==h[y]) 
                                      {
                                                      printf("%d %d %d\n",x+1,y+1,k[x]);
                                                      m=1;
                                      }
                     }
                     
      }
      
      if(m==0)printf("not found");               
      
}      
