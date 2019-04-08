int main()
{
 int n;
 scanf("%d",&n);
 double shengao[40];
 char xingbie[40][10];
 double nansheng[40],nvsheng[40];
 int m=0,f=0;
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%s",xingbie[i]);
  scanf("%lf",&shengao[i]);
 }
 for(i=0;i<n;i++)
 {
  if (strcmp(xingbie[i],"male")==0)
  {
   nansheng[m]=shengao[i];
   m++;
  }
  else if(strcmp(xingbie[i],"female")==0)
  {
   nvsheng[f]=shengao[i];
   f++;
  }
 }
 int j;
 double t;
 for(j=1;j<m;j++)
 {
  for (i=0;i<m-j;i++)
  {
   if (nansheng[i]>nansheng[i+1])
   {
    t=nansheng[i];
    nansheng[i]=nansheng[i+1];
    nansheng[i+1]=t;
   }
  }
 }
 double r;
 for (j=1;j<f;j++)
 {
  for(i=0;i<f-j;i++)
  {
   if(nvsheng[i]<nvsheng[i+1])
   {
    r=nvsheng[i];
    nvsheng[i]=nvsheng[i+1];
    nvsheng[i+1]=r;
   }
  }
 }
 for (i=0;i<m;i++)
 {
  printf("%.2lf ",nansheng[i]);
 }
 for(i=0;i<f;i++)
 {
  if(i<f-1)
{
printf("%.2lf ",nvsheng[i]);
}
else if(i==f-1)
{
printf("%.2lf",nvsheng[i]);
}
 }
 return 0;
}