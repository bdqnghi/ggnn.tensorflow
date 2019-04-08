void main()
{
 int k,m,i,j,n;
 int s1[20000],s2[20000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&s1[i]);
 for(i=n-1,m=0;i>=0;i--)
 {k=0;
  for(j=i-1;j>=0;j--)
  {if(s1[i]==s1[j])
   k++;}
  if(k==0)
  {s2[m]=s1[i];
   m++;}
}
  s2[m]='\0';
for(n=m-1;n>0;n--)
{printf("%d ",s2[n]);
 }
printf("%d",s2[0]);
}
