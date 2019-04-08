int main()
{int a[11][11],b[11][11];
int i,j,k,n,m;
scanf("%d %d",&m,&n);
for(i=0;i<11;i++)
for(j=0;j<11;j++)
a[i][j]=0;
a[5][5]=1;

for(k=0;k<n;k++)
{
                for(i=1;i<10;i++)
for(j=1;j<10;j++)
b[i][j]=a[i+1][j-1]+a[i+1][j+1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+2*a[i][j]+a[i-1][j-1]+a[i-1][j+1]+a[i-1][j];
for(i=1;i<10;i++)
for(j=1;j<10;j++)
a[i][j]=b[i][j];
                }

for(i=1;i<10;i++)
{for(j=1;j<10;j++)
{if((j==1)&&(i!=0))
printf("\n");
printf("%d",a[i][j]*m);
if(j!=9)
printf(" ");
}
}
getchar();
getchar();
    } 