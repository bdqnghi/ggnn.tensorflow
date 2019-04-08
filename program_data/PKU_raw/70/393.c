int main(int argc, char* argv[])
{
	int n,i,j;
	double l,max;
	max=0;

	struct {
		double a,b;
	} s[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%lf%lf",&s[i].a,&s[i].b);
		for (j=0;j<i;j++)
		{
			l=sqrt((s[i].a-s[j].a)*(s[i].a-s[j].a)+(s[i].b-s[j].b)*(s[i].b-s[j].b));
			if (l>max) max=l;
		}
	}
	printf("%.4lf",max);
	return 0;
}
	