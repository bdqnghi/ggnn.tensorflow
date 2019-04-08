void main()
{float temp,aver;int b[300];
	int c,d,j,s=0,i,n,a[300];
scanf("%d",&n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-1;i++)
s=s+a[i];
for(i=0;i<=n-1;i++)
{a[i]=a[i]*n;b[i]=abs(a[i]-s);}
for(i=0;i<=n-2;i++)
   for(j=i+1;j<=n-1;j++)
   {if(b[i]<=b[j]){temp=b[i];b[i]=b[j];b[j]=temp;}  }
c=(s-b[0])/n;d=(s+b[0])/n;
   if(b[0]==b[1])
{
printf("%d,%d",c,d);goto end;}
else 
{for(i=0;i<=n-1;i++)
{a[i]=a[i]/n;
if(a[i]==c) {printf("%d",c);goto end;}}
}
printf("%d",d);
end:scanf("%d",i);
}