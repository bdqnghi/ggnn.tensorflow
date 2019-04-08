
int main()
{
  char temp[101];
  int n,a[101]={0},b[101]={0},c[101]={0},i,j,l,m,is;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    is=1;
    scanf("%s",temp);
    l=strlen(temp);
    for(j=l-1;j>=0;j--)
    a[l-j]=temp[j]-48;
    scanf("%s",temp);
    m=strlen(temp);
    for(j=m-1;j>=0;j--)
    b[m-j]=temp[j]-48;
	for(j=m+1;j<=100;j++)b[j]=0;
    for(j=1;j<=l;j++)
    {
      if(a[j]<b[j])
      {
        a[j]+=10;
        a[j+1]--;
      }
      c[j]=a[j]-b[j];
    }
    while(c[l]==0){l--;if(l==0){is=0;break;}}
    if(is){for(j=l;j>=1;j--)printf("%d",c[j]);
    printf("\n");}
    else printf("%d\n",0);
  }
    
    
}

