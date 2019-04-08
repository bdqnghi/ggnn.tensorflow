int main()
{
int a[100000],i,n,k,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++) {
if(a[i]!=k){
b=a[0];
a[0]=a[i];
a[i]=b;
break;
}
}
printf("%d",a[0]);
for(i=1;i<n;i++) if(a[i]!=k)printf(" %d",a[i]);
return 0;
}

