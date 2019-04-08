main() { int f[20],a[20],i,j,n;
 scanf("%d",&n);
 
 f[1]=1; f[2]=1;
for(i=2;i<=20;i++)
    f[i+1]=f[i]+f[i-1];

for(i=1;i<=n;i++)
   { scanf("%d",&a[i]);
printf("\n");  }
for(j=1;j<=n;j++)
 { printf("%d",f[a[j]]);
printf("\n");  }

    }
   