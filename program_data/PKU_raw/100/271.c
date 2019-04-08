int main()
{
	int n,i,j,k,a[1000]={0};
    char m,b[1000],c[1000];
  gets(b);j=0;
  for(i=0;i<strlen(b);i++){if(b[i]>96&&b[i]<123){for(k=0;k<j;k++){if(b[i]==c[k]){a[k]++;break;}}
  if(k==j){c[j]=b[i];a[j]++;j++;}}}
  for(i=0;i<j;i++){for(k=0;k<j-1;k++)if(c[k]>c[k+1]){m=c[k];c[k]=c[k+1];c[k+1]=m;n=a[k];a[k]=a[k+1];a[k+1]=n;}}
  if(j==0)printf("No\n");else for(i=0;i<j;i++){printf("%c=%d\n",c[i],a[i]);}





  return 0;}