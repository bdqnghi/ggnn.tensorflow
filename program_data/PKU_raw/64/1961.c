int main()
{
int n,i,j,k=0;
double d[10][10]={0},D[45]={0},t;
struct point
{int x;
int y;
int z;
}p[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);}
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{d[i][j]=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)+(p[i].z-p[j].z)*(p[i].z-p[j].z));
D[k]=d[i][j];
k++;}}
for(i=0;i<n*(n-1)/2-1;i++)
{for(j=0;j<n*(n-1)/2-i-1;j++)
{if(D[j]<D[j+1])
{t=D[j];
D[j]=D[j+1];
D[j+1]=t;}}}
for(k=0;k<n*(n-1)/2;k++)
{if(D[k]==D[k+1])
continue;
else
{for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
if(d[i][j]==D[k])
{printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",p[i].x,p[i].y,p[i].z,p[j].x,p[j].y,p[j].z,d[i][j]);}}}}
return 0;
}