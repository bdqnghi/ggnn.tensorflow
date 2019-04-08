int main()
{
int a[5][5],b[5];
int m,n,i,j;
for(i=0;i<=4;i++)
{scanf("%d %d %d %d %d\n",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);}
scanf("%d %d",&m,&n);

if(m>=0&&m<=4&&n>=0&&n<=4) 
{for(j=0;j<=4;j++)
{b[j]=a[m][j];
 a[m][j]=a[n][j];
 a[n][j]=b[j];}
for(i=0;i<=4;i++)
{printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);}}
if(m<0||m>4||n<0||n>4) printf("error\n");
}

