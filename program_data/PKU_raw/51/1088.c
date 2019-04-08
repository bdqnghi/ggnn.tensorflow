main()
{
  int n,sum[500],max=0;
  int i,k,j;
  char a[501];
  scanf("%d",&n);
  scanf("%s",a);
  for(i=0;i<=strlen(a)-n;i++)
  {sum[i]=1;
    for(j=i+1;j<=strlen(a)-n;j++)
    {
       for(k=0;k<n;k++)
        if(a[i+k]!=a[j+k])
        break;
       if(k==n)
        sum[i]++;
    }
    if(max<sum[i])
    max=sum[i];
}
if(max>1)
{ printf("%d\n",max);
for(i=0;i<=strlen(a)-n;i++)
{
   if(sum[i]==max)
   for(j=0;j<n;j++)
   printf("%c",a[i+j]);
   printf("\n");
}
}
else
printf("NO");     

}