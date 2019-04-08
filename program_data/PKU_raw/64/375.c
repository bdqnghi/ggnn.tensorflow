int main()
{
int syz[10][3];
int i,j,n,d,y,k,r=0;
double result,sy[45];
scanf("%d",&n);
for(i=0;i<n;i++)
  {
    for(j=0;j<3;j++)
      {
        scanf("%d",&syz[i][j]);
       }
  }
for(i=0;i<n-1;i++)
   {
     for(k=i+1;k<n;k++)
       {
    result=sqrt(1.0*(syz[k][0]-syz[i][0])*(syz[k][0]-syz[i][0])+1.0*(syz[k][1]-syz[i][1])*(syz[k][1]-syz[i][1])+1.0*(syz[k][2]-syz[i][2])*(syz[k][2]-syz[i][2]));
     sy[r]=result;
       r++;
       }
    } 
  /*
  ?????sy???double???????e????double?? 
      int e;
      */
      double e;
   for(d=1;d<=n*(n-1)/2;d++)
      {
     for(y=0;y<n*(n-1)/2-d;y++)
         {
           if(sy[y]<=sy[y+1])
            {
            e=sy[y];
            sy[y]=sy[y+1];
            sy[y+1]=e;
             }
          }
      }
      /* 
for(i=1,k=1;j<n*(n-1)/2;i++)
??????????i?????? 
*/
for(i=1,k=1;i<n*(n-1)/2;i++)
  {
   for(j=0;j<k;j++)
      {
  /*
  ????????==????????????? 
      if(sy[i]==sy[j])
  */
    if(fabs(sy[i]-sy[j]) < 0.000001)
        {
      break;
        }
        }
    if(j==k)
     {
    sy[k]=sy[i];
     k++;
     }
     }    
  /*
  ???k???????????????? 
for(y=0;y<k;y++)
*/
int kk = k;
for(y=0;y<kk;y++)
      {
      for(i=0;i<n-1;i++)
        {
        for(k=i+1;k<n;k++)
          {
          /*
          ????????????????????                
          if(sqrt(1.0*(syz[k][0]-syz[i][0])*(syz[k][0]-syz[i][0])+1.0*(syz[k][1]-syz[i][1])*(syz[k][1]-syz[i][1])+1.0*(syz[k][2]-syz[i][2])*(syz[k][2]-syz[i][2]))==sy[y])
          */
          if(fabs(sqrt(1.0*(syz[k][0]-syz[i][0])*(syz[k][0]-syz[i][0])+1.0*(syz[k][1]-syz[i][1])*(syz[k][1]-syz[i][1])+1.0*(syz[k][2]-syz[i][2])*(syz[k][2]-syz[i][2]))-sy[y])<0.00001) 
            {
          printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",syz[i][0],syz[i][1],syz[i][2],syz[k][0],syz[k][1],syz[k][2],sy[y]);
             }
            }
           }
          }

return 0;
}
