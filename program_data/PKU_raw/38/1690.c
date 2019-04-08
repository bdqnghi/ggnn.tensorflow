/*?5?????????????????????????????,?4?5?????????????*/

int main()
{
	int m,i,a[100],j;
	double *p[100],S;
	double fang(double *p[],int);
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d\n",&a[i]);
		for(j=0;j<a[i];j++)
		{
			*(p+j)=(double *)malloc(len);
			scanf("%lf",*(p+j));
		}
		S=fang(p,a[i]);
		printf("%.5f\n",S);
	}
}


double fang(double *p[],int n)
{
	double c,a,T,S;
	int i;
	for(i=0,c=0;i<n;i++)
	c=c+*(*(p+i));
	a=c/n;
	for(i=0,T=0;i<n;i++)
		T=T+(*(*(p+i))-a)*(*(*(p+i))-a);
	S=sqrt(T/n);
	return S;
}
