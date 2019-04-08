void main()
{int m,n,i,j,a[8][8],max[7],min,min2,q,t;
scanf("%d,%d",&m,&n);
for (i=0;i<m;i++)
{for (j=0;j<n;j++)
scanf("%d",&a[i][j]);}
for (i=0;i<m;i++)
max[i]=0;
for (i=0 ;i<m;i++)
{for (j=0;j<n;j++)
if (a[i][j]>max[i])
max[i]=a[i][j];}
min=max[0];
for (i=0;i<m;i++)
{if (max[i]<=min)
{min=max[i];}}
for (i=0;i<m;i++)
{for (j=0;j<n;j++)
if (min==a[i][j])
{t=i;q=j;}}
min2=min;
for (j=0;j<m;j++)
{if (a[j][q]<=min2)
{min2 =a[j][q];}}
if (min==min2)
printf("%d+%d",t,q);
else 
printf("No");}


