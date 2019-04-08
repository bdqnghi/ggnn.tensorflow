char uup(char c)
{
  if (c>=97) c-=32; return(c);
}
void main()
{
  char arr[40]={0},brr[40]={0};
  int n,m,i,j,k;
  int a[40]={0},b[40]={0};
  scanf("%d%s%d",&n,arr,&m);
  i=strlen(arr);
  for (k=0;k<i;k++)
    {if(uup(arr[k])>58) a[i-k-1]=uup(arr[k])-'A'+10; else a[i-k-1]=arr[k]-'0';}
//if (n>30)printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
  for (k=0;k<40;k++)
  {
    for (j=39;j>=1;j--)
    {
      a[j-1]=a[j-1]+a[j]%m*n;
      a[j]=a[j]/m;
    }
    b[k]=a[0]%m; a[0]=a[0]/m;
  }
  k=39; while((b[k]==0)&&(k>=1))k--;
  for (;k>=0;k--)
  {
    if(b[k]>9)printf("%c",b[k]+'A'-10);
    else printf("%d",b[k]);
  }
  printf("\n");
}