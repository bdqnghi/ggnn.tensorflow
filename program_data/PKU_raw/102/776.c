char sex[10];
double f[40];
double m[40];
int fsize;
int msize;
int desend(const void *a, const void *b)
{
	if(*((double*)a)>*((double*)b))
		return -1;
	else
		return 1;
}
int asend(const void *a, const void *b)
{
	if(*((double*)a)>*((double*)b))
		return 1;
	else
		return -1;
}
int main()
{
	int p; int i,j,k;
	double h;
	while(scanf("%d",&p)!=EOF)
	{
		fsize=msize=0;
		for(i=0;i<p;i++)
		{
			cin>>sex;
			cin>>h;
			if(strcmp(sex,"male")==0)
			{
				m[msize]=h;
				msize++;
			}
			else
			{
				f[fsize]=h;
				fsize++;
			}
		}
		qsort(f,fsize,sizeof(double),desend);
		qsort(m,msize,sizeof(double),asend);
		for(i=0;i<msize;i++)
			printf("%.2lf ",m[i]);
		for(i=0;i<fsize-1;i++)
			printf("%.2lf ",f[i]);
		printf("%.2lf\n",f[fsize-1]);
	}
	return 0;
}