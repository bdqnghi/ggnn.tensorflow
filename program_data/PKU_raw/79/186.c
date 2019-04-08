void main()
{int f(int n,int m);
int a[100],b[100],c[100],i;
for(i=0;i<100;i++)
{scanf("%d%d",&a[i],&b[i]);
if(a[i]==0&&b[i]==0)
break;
c[i]=f(a[i],b[i]);
}
for(i=0;a[i]!=0;i++)
printf("%d\n",c[i]);
}

int f(int n,int m)
{int z;
if(n==1)
z=1;
if(n!=1)
{z=(f(n-1,m)+m)%n;
if(z==0)
z=n;
}
return(z);
}