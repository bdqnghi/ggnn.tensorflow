
int main(int argc, char *argv[])
{
  int c[500]={0},i,j,k=0,n;
  char a[500]={'\0'};
  char b[500][5]={'\0'};
  scanf("%d",&n);
  getchar();
  gets(a);
  for(i=0;a[i+n-1]!='\0';i++)
  {
       for(j=0;j<n;j++)
       b[i][j]=a[i+j];
  }
  for(i=0;a[i+n-1]!='\0';i++)
  {
       for(j=i;a[j+n-1]!='\0';j++)
       {
             if(strcmp(b[i],b[j])==0)
             c[i]++;
       }
  }
  for(i=0;c[i]>0;i++)
  {
      if(c[i]>k)
      k=c[i];
  }
  if(k==1)
  printf("NO");
  else
  {
  printf("%d\n",k);
  for(i=0;a[i+n-1]!='\0';i++)
  {
       if(c[i]==k)
       printf("%s\n",b[i]);
  }}
  return 0;
}
