void main()
{int m,n,i=0,j=0,k,l,x,y;
int a[301];int b[301];int c[301];int d[301];
scanf("%d %d",&a[0],&b[0]);
for(i=0;a[i]!=0&&b[i]!=0;i++)
   {scanf("%d %d",&a[i+1],&b[i+1]);}
y=i-1;for(i=0;i<=y;i++)
       {n=a[i];m=b[i];x=n;
           for(j=1;j<=n;j++)
              {c[j-1]=j;}
         for(k=1;k<x;k++)
           { for(j=(m%n)+1;j<=n;j++){d[j-(m%n)-1]=c[j-1];}
             for(j=0;j<(m%n);j++){d[j+n-(m%n)]=c[j];}n--;
            for(l=0;l<=n;l++)c[l]=d[l];}
          printf("%d\n",c[0]);}
}
