int main()
{
int m,n,i,j;double a[200][200];
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%lf",&a[i][j]);
for(j=0;j<n;j++)
{if(j==0)
{if(a[0][j]>=a[0][j+1]&&a[0][j]>=a[1][j])
printf("%d %d\n",0,j);}
else if(j==n-1)
{if(a[0][j]>=a[0][j-1]&&a[0][j]>=a[1][j])
printf("%d %d\n",0,j);}
else if(a[0][j]>=a[0][j-1]&&a[0][j]>=a[1][j]&&a[0][j]>=a[0][j+1])                
printf("%d %d\n",0,j);
                }
                for(i=1;i<m-1;i++)
                for(j=0;j<n;j++)
                {if(j==0)
{if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
printf("%d %d\n",i,j);}
else if(j==n-1)
{if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
printf("%d %d\n",i,j);}
else if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])                
printf("%d %d\n",i,j);
                }
                for(j=0;j<n;j++)
{if(j==0)
{if(a[m-1][j]>=a[m-1][j+1]&&a[i][j]>=a[m-2][j])
printf("%d %d\n",m-1,j);}
else if(j==n-1)
{if(a[m-1][j]>=a[m-1][j-1]&&a[i][j]>=a[m-2][j])
printf("%d %d\n",m-1,j);}
else if(a[m-1][j]>=a[m-1][j-1]&&a[i][j]>=a[m-1][j+1]&&a[i][j]>=a[m-2][j])                
printf("%d %d\n",m-1,j);
                }
}
