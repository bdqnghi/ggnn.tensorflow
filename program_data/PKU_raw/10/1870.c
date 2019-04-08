int max(int x,int y)
{  if(x>y) return x;
   else return y;
}

main()
{  int a[30];
   int b[30];
   int i,j,n,t;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=1;i<=n;i++)
   b[i]=1;
 
   for(i=n-1;i>=1;i--)
{   for(j=i+1;j<=n;j++)
      if(a[i]>=a[j])
      b[i]=max(b[i],b[j]+1) ;

}
t=b[1];
for(i=2;i<=n;i++)
t=max(t,b[i]);
printf("%d",t);
getchar();
getchar();
}
