int f(int a)
{
	if(a==1 ) return 1;
    else  if(a==2) return 2;
	return f(a-1)+f(a-2);
}
int main()
{
	int n,i,a1,a2,j,m;
	double sum;
	a1=f(1);
	a2=f(2);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{     
		sum=2;
		scanf("%d",&m);
		for(j=2;j<=m;j++)
		{
		   
	       sum+= (1.0*f(j+1)/f(j));
		}
		printf("%.3lf\n",sum);
	}
   
	  return 0;
}