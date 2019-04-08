void main()
{
int a[300],c[300]={0},i,j,n,k=0,l=0;
float z=0,b[300];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
z=z+a[i];
z=z/n;
for(i=0;i<n;i++)
{if(a[i]>z)
b[i]=a[i]-z;
else b[i]=z-a[i];
}
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{if(b[j]>b[i])
c[i]++;}
}
for(i=0;i<n;i++)
{if(c[i]==0)
k++;}
for(i=0;i<n;i++)
{if(c[i]==0)
{l++;
if(l==k)
	printf("%d",a[i]);
else printf("%d,",a[i]);}
}
}