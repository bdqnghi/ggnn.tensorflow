void main()
{int a[100],m,n,i,j,t=0;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=n-m;j<n;j++)
{if(t==0){printf("%d",a[j]);t=t+1;}
else printf(" %d",a[j]);}
for(j=0;j<n-m;j++)
printf(" %d",a[j]);}