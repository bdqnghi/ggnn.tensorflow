
double average(double *data[100],int n)
{
double sum=0,a;
int i;
for(i=0;i<n;i++)
  {
  sum+=*data[i];
  }
//printf("sum=%lf",sum);
a=sum/n;
return a;
}

double S(double *data[100],int n,double a)
{
double sum=0,root;
int i;
for(i=0;i<n;i++)
 sum+=(*data[i]-a)*(*data[i]-a);
//printf("sum=%lf",sum);
root=sqrt(sum/n);
return root;
}

void main()
{
int k,i;
int n,j;
double *temp,a,s,*data[100];

scanf("%d",&k);

     for(j=0;j<k;j++)
  {
  scanf("%d",&n);

  
  for(i=0;i<n;i++)
  {
	   temp=(double *)malloc(sizeof(double));
	  scanf("%lf",temp);data[i]=temp;
  }
  a=average(data,n);

  s=S(data,n,a);
  printf("%.5f\n",s);
   }         

}