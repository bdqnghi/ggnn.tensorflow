int main()
{
double sq(double c,double d,double e,double f);
double a[100];
double b[100];
int n,i,j;
double max;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf %lf",&a[i],&b[i]);
max=sq(a[0],b[0],a[1],b[1]);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	if(sq(a[i],b[i],a[j],b[j])>max)
		max=sq(a[i],b[i],a[j],b[j]);
}
}
printf("%.4lf",max);
return 0;
}
double sq(double c,double d,double e,double f){
	double s;
	s=(c-e)*(c-e)+(d-f)*(d-f);
	s=sqrt(s);
	return s;
}