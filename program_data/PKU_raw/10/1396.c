main()
{int k,i,j,s,d,max=0,m=1;
int a[26],b[26];
scanf("%d",&k);
for(i=1;i<=k;i++)
scanf("%d",&a[i]);
b[k]=1;
for(i=k-1;i>0;i--)
{
for(j=i+1;j<=k;j++)
{
if(a[i]>=a[j]&&b[j]>max)
max=b[j];
}
b[i]=max+1;
max=0;
}
for(d=1;d<=k;d++)
{
if(b[d]>=m) m=b[d];
}
printf("%d",m);
}

