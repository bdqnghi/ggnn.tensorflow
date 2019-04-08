main()
{
   int k,j,i,l,m,n;
  int a[20][2];
  int p=0;
  for(j=0;;j++)
  {
  for(l=0;l<=1;l++)
  {
  scanf("%d",&a[j][l]);
  }
  printf("\n");
  p++;
  if((a[j][0]==0)||a[j][1]==0)
   break;
  }
  for(j=0;j<=p;j++)
  {
  if((0<a[j][0]&&a[j][0]<=300)&& (0<a[j][1]&&a[j][1]<=300)) 
  {  k=0;
    for(i=2;i<=a[j][0];i++)
    {
     k=((a[j][1]%i)+k)%i;
    }
            printf("%d\n",k+1);
  }          
  }
}
