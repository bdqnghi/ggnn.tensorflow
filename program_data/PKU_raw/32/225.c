main()
{
char str1[10][100],str2[10][100];
int a[10],b[10];
int i,j,k,n,t[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
     scanf("%s%s",str1[i],str2[i]);
  a[i]=strlen(str1[i]);b[i]=strlen(str2[i]);
}

for(i=0;i<n;i++)
{
        for(j=0;j<a[i];j++)
  {
   if(j<a[i]-b[i])t[j]=str1[i][j]-48;
            else t[j]=str1[i][j]-str2[i][j-a[i]+b[i]];
  }
  for(k=a[i]-1;k>=0;k--)
  {
   if(t[k]<0)
   {
    t[k-1]=t[k-1]-1;t[k]=t[k]+10;
   }
  }
  for(k=0;k<a[i];k++)
  {
   printf("%d",t[k]);
  }
  printf("\n");
}
}
