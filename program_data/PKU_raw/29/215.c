int FB(int n)
{
	int a = 0;
	if(n==0)a=1;
	else if(n==1)a=2;
	else a = FB(n-1) + FB(n-2);
	return a;
}
int main(int argc, char* argv[])
{
	int m;
	scanf("%d",&m);
	int *n = (int *)malloc(sizeof(int)*m);
	double *h = (double *)malloc(sizeof(double)*m);
	int i ;
	for(i=0;i<m;i++)
	{
		h[i] = 0;
		scanf("%d",&n[i]);
		int j;
		for(j=0;j<n[i];j++)
			h[i]+= (double)FB(j+1)/FB(j);
	}
	for(i=0;i<m;i++)
		printf("%.3f\n",h[i]);
	return 0;
}