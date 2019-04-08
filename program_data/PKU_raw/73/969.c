int main()
{int a[5][5],m,n,w=0;
for(m=0;m<=4;m++)
{
for(n=0;n<=4;n++)
scanf("%d",&a[m][n]);
}
for(m=0;m<=4;m++)
{
for(n=0;n<=4;n++)
{int j,x;
j=a[m][0];
for(x=1;x<=4;x++)
{if(a[m][x]>j)
j=a[m][x];
}
int y,q;
y=a[0][n];
for(q=1;q<=4;q++)
{
if(a[q][n]<y)
y=a[q][n];
}
if(j==y&&y==a[m][n])
{
printf("%d %d %d",m+1,n+1,a[m][n]);w=1;
                    }
}
}
if(w==0)
printf("not found");
}