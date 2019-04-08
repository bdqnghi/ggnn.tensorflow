int main()
{
 int m,n,i,c;
 double a,r;
 double b[100];
	scanf("%d",&m);
	for(i=1;i<=m;i++){
    scanf("%d",&n);
  r=0.0;
  a=2.0/1;
  for(c=1;c<=n;c++){
    r+=a;
    a=1.0/a+1;
}
	b[i]=r;
	}
	for(i=1;i<=m;i++){
printf("%.3lf\n",b[i]);
	}
	return 0;
}
