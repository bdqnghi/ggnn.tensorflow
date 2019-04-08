void main()
{int a[100],b[100],i,j,k=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
b[i]=1;}
for(i=n-1;i>=0;i--)
{k=0;
for(j=n-1;j>i;j--)
{if(a[i]>=a[j]&&b[j]>k)
{k=b[j];
b[i]=b[j]+1;}
}
}
k=b[0];
for(i=0;i<n;i++)
{if(b[i]>k)
k=b[i];}
printf("%d",k);
}