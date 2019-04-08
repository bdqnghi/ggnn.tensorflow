int main()
{
int m,n,i,j,k,a[100][100],x1,x2,y1,y2,s=0,t=0;
scanf("%d",&m);
scanf("%d",&n);
x1=0;x2=n-1;
y1=0;y2=m-1;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
i=0;j=0;
for(k=0;k<m*n;k++)
{
printf("%d\n",a[i][j]);
if((i==y1)&&(j<x2))
{
j++;
}
else if((j==x2)&&(i<y2))
{
i++;
}
else if((i==y2)&&(j>x1))
{
j--;
}
else if((j==x1)&&(i==y1+1))
{
j++;
x1++;
x2--;
y1++;
y2--;
}
else
{
i--;
}


}

return 0;
}

