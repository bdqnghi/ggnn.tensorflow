int main()
{
    float a[100][9],b[20][4],max=0;//1-3???????4-5??????7???
    int n,i,j,k=1;
    cin>>n;
    for (i=1;i<=n;i++)
      {for(j=1;j<=3;j++){
          cin>>b[i][j];
          }}
    
    for (i=1;i<=n-1;i++)
       {for (j=i+1;j<=n;j++)
         {a[k][1]=b[i][1];
          a[k][2]=b[i][2];
          a[k][3]=b[i][3];
          a[k][4]=b[j][1];
          a[k][5]=b[j][2];
          a[k][6]=b[j][3];
          a[k][7]=sqrt(pow((a[k][1]-a[k][4]),2)+pow((a[k][2]-a[k][5]),2)+pow((a[k][3]-a[k][6]),2));
          a[k][8]=0; //??????
          k++;
          }
       }
   
   for(i = 1;i <= (n*n-n)/2;i++){
   for (k=1;k<=(n*n-n)/2;k++)
   {
       if (a[k][7]>max&&a[k][8]==0)
       max=a[k][7];
   }
   for (k=1;k<=(n*n-n)/2;k++)
   {if (max==a[k][7]&&a[k][8]==0){
   printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",a[k][1],a[k][2],a[k][3],a[k][4],a[k][5],a[k][6],a[k][7]);
   a[k][8]=1;
   max=0;
   }}
   }
   return 0;  
}
