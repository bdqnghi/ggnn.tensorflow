int main()
{
   int m,n;

scanf("%d",&m);
int i;
double a,b,c;
for(i=0;i<m;i+=1){
	scanf("%d",&n);
	int j;
	double s=0;
	a=2;
	b=1;
	for(j=1;j<=n;j+=1)
	{  s+=a/b;
		c=a;
	 a=a+b;
	b=c;}

printf("%.3lf\n",s);
}
return 0;
}