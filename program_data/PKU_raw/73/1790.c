void main()
{
int a[5][5],i,j,k,l=0,t=0;
int (*p)[5];
p=a;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",(*(p+i)+j));
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{t=0;
for(k=0;k<5;k++)
{if(*(*(p+i)+j)<*(*(p+i)+k))
t--;}
for(k=0;k<5;k++)
{if(*(*(p+i)+j)>*(*(p+k)+j))
t--;}
if(t==0)
{printf("%d %d %d",i+1,j+1,a[i][j]);
l--;}
}}
if(l==0)
printf("not found");
}

