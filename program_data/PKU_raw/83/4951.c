int main()
{
  int n,k;
  scanf("%d",&n);
  float a[15],b[15],GPA,sum=0;
  for(k=0;k<n;k++)
{
  scanf("%f",&a[k]);
}
  for(k=0;k<n;k++)
{
  scanf("%f",&b[k]);
}
  for(k=0;k<n;k++)
{
  if(b[k]>=90) b[k]=4;
  else if(b[k]>=85) b[k]=3.7;
  else if(b[k]>=82) b[k]=3.3;
  else if(b[k]>=78) b[k]=3.0;
  else if(b[k]>=75) b[k]=2.7;
  else if(b[k]>=72) b[k]=2.3;
  else if(b[k]>=68) b[k]=2.0;
  else if(b[k]>=64) b[k]=1.5;
  else if(b[k]>=60) b[k]=1.0;
  else b[k]=0;
}
  for(k=0;k<n;k++)
{
  GPA=GPA+a[k]*b[k];sum=sum+a[k];
}
  printf("%.2f",GPA/sum);
  return 0;
}