 
int main()
{int h,n;
scanf("%d\n",&n);
for(h=1;h<=n;h++)
{int i,j,k,t,sum=0,a[105][105];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf(" %d",&a[i][j]);
for(t=n;t>1;t--)
{for(i=0;i<t;i++)
{k=a[i][0];
for(j=1;j<t;j++)
{if(a[i][j]<k) k=a[i][j];}
for(j=0;j<t;j++)
a[i][j]-=k;
}
for(i=0;i<t;i++)
{k=a[0][i];
for(j=1;j<t;j++)
{if(a[j][i]<k) k=a[j][i];}
for(j=0;j<=t;j++)
a[j][i]-=k;
}
sum+=a[1][1];
for(j=2;j<t;j++)
a[0][j-1]=a[0][j];
for(i=2;i<t;i++)
a[i-1][0]=a[i][0];
for(i=2;i<=t;i++)
for(j=2;j<=t;j++)
a[i-1][j-1]=a[i][j];
}
printf("%d\n",sum);

}
return 0;
}