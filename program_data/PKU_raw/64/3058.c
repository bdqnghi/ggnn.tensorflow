
int main(int argc, char *argv[])
{
  int n;
  int a[10][3],z[100][6];
  float d[100],t;
  int i,j,l;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  int k=0;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      t=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]); 
      d[k]=sqrt(t);
      z[k][0]=a[i][0];z[k][1]=a[i][1];z[k][2]=a[i][2];z[k][3]=a[j][0];z[k][4]=a[j][1];z[k][5]=a[j][2];
      k++;
    }
  }
  for(i=k-1;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
      if(d[j]<d[j+1])
      {
        float e;
        e=d[j];d[j]=d[j+1];d[j+1]=e;
        int s;
        for(l=0;l<6;l++)
        {
          s=z[j][l];z[j][l]=z[j+1][l];z[j+1][l]=s;
        }
      }                                                                                      
    }
  }
  for(i=0;i<k;i++)
  {
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",z[i][0],z[i][1],z[i][2],z[i][3],z[i][4],z[i][5],d[i]);
  }
  
  return 0;
}
