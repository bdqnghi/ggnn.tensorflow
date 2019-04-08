void main()
{
  int n,a[65536]={0};
  int i,j,k;
  scanf("%d",&n);a[n]++; //scanf(",%d",&n);printf("%d",n);
  while (scanf(",%d",&n)!=0){a[n]++;}
  k=0;
  for(i=65535;i>=0;i--){if(a[i]!=0)k++;if (k==2)break;}
  if (k==2)printf("%d",i);else printf("No");
}