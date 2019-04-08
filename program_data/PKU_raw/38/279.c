void main()
{
 int n,num[100],i,j;
 double data[100][30],fang[100],aver[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&num[i]);
  for(j=0;j<num[i];j++)
  scanf("%lf",&data[i][j]);
 }
 for(i=0;i<n;i++)
 {
  aver[i]=0;fang[i]=0;
  for(j=0;j<num[i];j++)
   aver[i]=(double)(aver[i]+(double)(data[i][j]/num[i]));
  for(j=0;j<num[i];j++)
   fang[i]=fang[i]+(double)((data[i][j]-aver[i])*(data[i][j]-aver[i]));
   fang[i]=(double)(fang[i]/num[i]);
   fang[i]=sqrt(fang[i]);
  printf("%.5lf\n",fang[i]);
 }
}