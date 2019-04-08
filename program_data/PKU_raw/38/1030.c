void main()
{
int k,i,j;
double * x[101];
double n;
scanf("%d",&k);
 for(i=0;i<k;i++)
 {
  double a=0.0,s=0.0,S;
  scanf("%lf",&n);
  for(j=0;j<n;j++)
  {
  x[j]=(double *)malloc(sizeof(double));
  scanf("%lf",x[j]);
  a+=*x[j];
  }
  a=a/n;
  for(j=0;j<n;j++)
  {
  s+=pow((*x[j]-a),2);
  }
  
  S=sqrt(s/n);
  printf("%.5f\n",S);

 }

}