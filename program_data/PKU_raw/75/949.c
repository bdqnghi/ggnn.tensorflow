void main()
{   int p[1000],q[1000],i=0,j,n,max=0,a[1000]={0},m=0;
    char c;
    do
{   scanf("%d%c",&p[i],&c);
     i++;
}   while(c==',');
    n=i;
    for(j=0;j<n;j++)
{   scanf("%d",&q[j]);
    c=getchar(); 
}   for(i=0;i<n;i++)
    if(max<q[i]) max=q[i];
   for(i=2;i<=max;i++) 
   for(j=0;j<n;j++)
{  if(p[j]<=i&&q[j]>i) a[i]++;
}  for(i=0;i<1000;i++)
{  if(m<a[i])m=a[i];
} printf("%d %d",n,m);
}

